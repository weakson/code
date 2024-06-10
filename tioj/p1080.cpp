#include<bits/stdc++.h>
#define ll long long
#define weakson ios::sync_with_stdio(0), cin.tie(0);
using namespace std;

vector<ll> v;

ll solve(int l, int r){
	if (l + 1 == r) return 0;

	int mid = (l + r) / 2;
	ll sum = 0;

	sum += solve(l, mid);
	sum += solve(mid, r);

	int lp = l, rp = mid;
	ll cnt = 0;
	vector<ll> tmp;

	while (lp < mid && rp < r){
		if (v[lp] > v[rp]){
			cnt++;
			tmp.emplace_back(v[rp++]);
		}
		else{
			sum += cnt;
			tmp.emplace_back(v[lp++]);
		}
	}

	while (lp < mid){
		sum += cnt;
		tmp.emplace_back(v[lp++]);
	}

	while (rp < r){
		tmp.emplace_back(v[rp++]);
	}

	for (int i = l, j = 0; i < r; i++) v[i] = tmp[j++];

	return sum;
}

int main(){
	weakson;

	int n, t = 1;
	
	while (cin >> n){
		if (n == 0) break;

		cout << "Case #" << t << ": ";

		v.resize(n);

		for (int i = 0; i < n; i++){
			cin >> v[i];
		}

		ll ans = solve(0, n);
		cout << ans << '\n';

		t++;

		v.clear();
	}
}
