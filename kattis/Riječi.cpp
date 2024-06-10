#include<bits/stdc++.h>
#define ll long long
#define weakson ios::sync_with_stdio(0), cin.tie(0);
using namespace std;

int main(){
	weakson;

	const int M = 45;

	ll dp[46];
	dp[0] = 0;
	dp[1] = 1;

	for (int i = 2; i <= M; i++){
		dp[i] = dp[i - 1] + dp[i - 2];
	}

	int n;
	cin >> n;

	cout << dp[n - 1] << ' ' << dp[n] << '\n';

	return 0;
}
