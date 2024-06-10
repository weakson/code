#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define dbg(x) cout << #x << " = " << x << endl;
#define MAX 1e18
using namespace std;

ll g[1010][1010];
ll dp[25][1010][1010];

int main(){
	weakson;

	int n, m, x;
	cin >> n >> m >> x;

	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= m; j++){
			cin >> g[i][j];
		}
	}

	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= m; j++){
			if (i == 1 && j == 1) dp[0][i][j] = g[i][j];
			else if (i == 1) dp[0][i][j] = dp[0][i][j - 1] + g[i][j];
			else if (j == 1) dp[0][i][j] = dp[0][i - 1][j] + g[i][j];
			else dp[0][i][j] = min (dp[0][i - 1][j], dp[0][i][j - 1]) + g[i][j];
			for (int k = 1; k <= x; k++){
				if (i == 1 && j == 1) dp[k][i][j] = g[i][j];
				else if (i == 1) dp[k][i][j] = dp[k][i][j - 1] + g[i][j];
				else if (j == 1) dp[k][i][j] = dp[k][i - 1][j] + g[i][j];
				else dp[k][i][j] = min ({dp[k][i - 1][j], dp[k][i][j - 1], dp[k - 1][i - 1][j - 1]}) + g[i][j];
			}
		}
	}

	ll ans = MAX;
	for (int i = 0; i <= x; i++){
		ans = min (ans, dp[i][n][m]);
	}

	cout << ans << '\n';
}
