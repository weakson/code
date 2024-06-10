#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(0),cin.tie(0)
using namespace std;

int main(){
	fastio;
	const int MAX = 1e9 + 7;
	int n, m;
	cin >> n >> m;
	long long dp[1000005] = {};
	dp[0] = 1;
	for(int i = 0; i < n; i++){
		int temp;
		cin >> temp;
		for(int j = temp; j <= m; j++){
			dp[j] += dp[j - temp];
			dp[j] %= MAX;
		}
	}
	cout << dp[m] << '\n';
	return 0;
}

