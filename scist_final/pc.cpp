#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define pii pair<int, int>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

vector<int> a, b;

int main(){
	weakson;

    int n, m;
    cin >> n >> m;

    a.resize(n + 1);
    b.resize(n + 1);

    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) cin >> b[i];

    vector<int> dp[2][1005];
    for (int i = 0; i < 1005; i++) dp[0][i].resize (m + 1);
    for (int i = 0; i < 1005; i++) dp[1][i].resize (m + 1);

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            dp[0][i][j] = max (dp[0][i - 1][j], dp[1][i - 1][j]);
            if (i >= 2 && j - a[i] >= 0){
                dp[1][i][j] = max (dp[1][i - 2][j - a[i]], dp[0][i - 1][j - a[i]]) + b[i];
            }
            else if (j - a[i] >= 0){
                dp[1][i][j] = dp[0][i - 1][j - a[i]] + b[i];
            }
        }
    }

    cout << max(dp[0][n][m], dp[1][n][m]) << '\n';

    return 0;
}
