#include<bits/stdc++.h>
#define ll long long
#define INF 1e10
#define weakson ios::sync_with_stdio(0), cin.tie(0);
using namespace std;

int main(){
	weakson;

	int n, W;
	cin >> n >> W;

	vector<ll> w(n), v(n);

	ll temp = 0;

	for (int i = 0; i < n; i++){
		cin >> w[i] >> v[i];
		temp += v[i];
	}

	vector<ll> dp(temp + 1, INF);

	dp[0] = 0;

	for (int i = 0; i < n; i++){
		for (int j = temp; j - v[i] >= 0; j--){
			dp[j] = min (dp[j], dp[j - v[i]] + w[i]);
		}
	}

	for (int i = temp; i > 0; i--){
		if (dp[i] <= W){
			cout << i << '\n';
			break;
		}
	}

	return 0;

}
