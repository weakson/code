#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(0), cin.tie(0)
using namespace std;

int main(){
	fastio;
	int n, x;
	cin >> n >> x;
	int a[105];
	long long dp[1000005];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	dp[0] = 0;
	for(int i = 1; i <= x; i++){
		dp[i] = (int)1e9;
		for(int j = 0; j < n; j++){
			if(i - a[j] >= 0) dp[i] = min (dp[ i - a[j] ] + 1, dp[i]);
		}
	}
	if(dp[x] == (int)1e9) cout << -1 << '\n';
	else cout << dp[x] << '\n';
	return 0;
}
