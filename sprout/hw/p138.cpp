#include<bits/stdc++.h>
#define ll long long
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define INF 1000007
using namespace std;

int main(){
	weakson;
	vector<ll> dp(100005);
	dp[0] = 0;
	dp[1] = 0;
	dp[2] = 3;
	for (int i = 3; i <= 100000; i++){
		if (i & 1) dp[i] = 0;
		else dp[i] = dp[i - 2] * 3;
		dp[i] %= INF;
	}
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		cout << dp[n] << '\n';
	}
	return 0;
}
