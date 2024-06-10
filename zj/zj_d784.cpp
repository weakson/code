#include<bits/stdc++.h>
#define ll long long
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define INF -1e8
using namespace std;

vector<int> v;

ll solve(int l, int r){
	if (l + 1 == r){
		return v[l];
	}
	int mid = (l + r) / 2;
	ll max_sum = max (solve(l, mid), solve(mid, r));
	ll lmax = INF, rmax = INF;
	ll sum = 0;
	for (int i = mid - 1; i >= l; i--){
		sum += v[i];
		lmax = max (lmax, sum);
	}
	sum = 0;
	for (int i = mid; i < r; i++){
		sum += v[i];
		rmax = max (rmax, sum);
	}
	return max (max_sum, lmax + rmax);
}

int main(){
	weakson;
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		v.clear();
		v.resize(n);
		for (int i = 0; i < n; i++){
			cin >> v[i];
		}
		ll ans = solve (0, n);
		cout << ans << '\n';
	}
	return 0;
}
