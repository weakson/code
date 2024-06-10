#include<bits/stdc++.h>
#define ll long long
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define INF 10000019LL
using namespace std;

vector<ll> v;
ll sum;

void solve(int l, int r){
	if (l + 1 == r){
		return;
	}
	int mid = (l + r) / 2;
	solve (l, mid);
	solve (mid, r);
	int lp = l, rp = mid;
	vector<ll> temp;
	ll pre_sum = 0, cnt = 0;
	while (lp < mid && rp < r){
		if (v[rp] < v[lp]){
			pre_sum += v[rp];
			pre_sum %= INF;
			cnt++;

			temp.emplace_back(v[rp++]);
		}
		else{
			sum += cnt * v[lp];
			sum %= INF;
			if (cnt != 0) sum += pre_sum;
			sum %= INF;
			temp.emplace_back(v[lp++]);
		}
	}
	while (lp < mid){
		sum += cnt * v[lp];
		sum %= INF;
		sum += pre_sum;
		sum %= INF;

		temp.emplace_back(v[lp++]);
	}
	while (rp < r) temp.emplace_back(v[rp++]);
	for (int i = l, j = 0; i < r; i++) v[i] = temp[j++];
	return;
}

int main(){
	weakson;
	int n;
	cin >> n;
	v.resize(n);
	for (int i = 0; i < n; i++) cin >> v[i];
	solve (0, n);
	// for (ll i : v) cout << i << ' ';
	cout << sum % INF << '\n';
	return 0;
}
