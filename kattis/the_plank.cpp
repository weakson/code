#include<bits/stdc++.h>
#define ll long long
#define weakson ios::sync_with_stdio(0), cin.tie(0);
using namespace std;

int main(){
	weakson;
	
	const int N = 24;

	ll dp[25];
	dp[0] = 0;
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;

	for (int i = 4; i <= N; i++){
		dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
	}

	int n;
	cin >> n;

	cout << dp[n] << '\n';

	return 0;
}
