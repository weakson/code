#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(0),cin.tie(0);
#define ll long long
using namespace std;

int main(){
	fastio
	const int MAX = (int)1e9 + 7;
	int n;
    cin >> n;
	ll dp[n + 1] = {};
	dp[0] = 1;
	for(int i = 1; i <= n; i++){
		int m = min (i, 6);
		for(int j = 1; j <= m; j++){
			dp[i] += dp[i - j];
			dp[i] %= MAX;
		}
	}
	cout << dp[n] << '\n';
	return 0;
}
