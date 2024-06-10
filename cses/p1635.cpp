#include<bits/stdc++.h>
#define weakson ios::sync_with_stdio(0),cin.tie(0);
#define ll long long
using namespace std;

const int MAX = 1e9 + 7;

int main(){
	weakson;

	int n, m;
	cin >> n >> m;

	int a[105];
	ll dp[1000005] = {};

	for(int i = 0; i < n; i++){
		cin >> a[i];
	}

	dp[0] = 1;

	for (int i = 1; i <= m; i++){
		for (int j = 0; j < n; j++){
			if (i - a[j] >= 0){
				dp[i] += dp[i - a[j]] % MAX;
				dp[i] %= MAX;
			}
		}
	}
	
	cout << dp[m] << '\n';

	return 0;
}
