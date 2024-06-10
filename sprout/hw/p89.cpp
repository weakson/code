#include<bits/stdc++.h>
#define ll long long
#define weakson ios::sync_with_stdio(0), cin.tie(0);
using namespace std;

bool cmp (pair<int, int> a, pair<int, int> b){
	return a.second > b.second;
}

int main(){
	weakson;
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		vector<pair<int, int> > v(n);
		for (int i = 0; i < n; i++){
			cin >> v[i].first >> v[i].second;
		}
		sort (v.begin(), v.end(), cmp);
		vector<ll> pre_sum(n + 1), ans;
		pre_sum[0] = 0;
		for (int i = 0; i < n; i++){
			pre_sum[i + 1] = pre_sum[i] + v[i].first;
			ans.emplace_back (pre_sum[i + 1] + v[i].second);
		}
		sort (ans.begin(), ans.end() );
		cout << ans[n - 1] << '\n';
	}
	return 0;
}
