#include<bits/stdc++.h>
#define ll long long
#define weakson ios::sync_with_stdio(0), cin.tie(0);
using namespace std;

int main(){
	weakson;
	int n;
	cin >> n;
	vector<pair<int, int> > v(n);
	for (int i = 0; i < n; i++){
		cin >> v[i].first >> v[i].second;
	}
	sort (v.begin(), v.end());
	ll sum = 0, ans = 0;
	for (int i = 0; i < n; i++){
		sum += v[i].first;
		ans += v[i].second - sum;
	}
	cout << ans << '\n';
	return 0;
}
