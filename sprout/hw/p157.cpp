#include<bits/stdc++.h>
#define ll long long
#define INF 10000000
#define weakson ios::sync_with_stdio(0), cin.tie(0);
using namespace std;

int main(){
	weakson;
	int t;
	cin >> t;
	while (t--){
		int n, m;
		cin >> n >> m;

		vector<ll> a(n), b(n);
		ll temp = 0;

		for (int i = 0; i < n; i++){
			cin >> a[i] >> b[i];
			temp += b[i];
		}

		vector<ll> dp(temp + 1, INF);
		dp[0] = 0;

		for (int i = 0; i < n; i++){
			for (int j = temp; j - b[i] >= 0; j--){
				dp[j] = min (dp[j], dp[j - b[i]] + a[i]);
			}
		}

		for (int i = temp; i > 0; i--){
			if (dp[i] <= m){
				cout << i << '\n';
				break;
			}
		}

		//cout << dp[m] << '\n';
	}
	return 0;
}
