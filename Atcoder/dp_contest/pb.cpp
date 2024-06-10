#include<bits/stdc++.h>
#define ll long long
#define INF 10000000000
#define weakson ios::sync_with_stdio(0), cin.tie(0);
using namespace std;

int main(){
	weakson;
	int n, k;
	cin >> n >> k;
	vector<ll> v(n + 1), dp(n + 1, INF);
	for (int i = 1; i <= n; i++){
		cin >> v[i];
	}

	dp[0] = 0;
	dp[1] = 0;
	dp[2] = abs (v[2] - v[1]);

	for (int i = 3; i <= n; i++){
		for (int j = 1; j <= k; j++){
			if (i - j >= 1) dp[i] = min(dp[i], dp[i - j] + abs(v[i] - v[i - j]));
		}
	}

	cout << dp[n] << '\n';

	return 0;
	
}
