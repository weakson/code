#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define pii pair<int, int>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

int main(){
	weakson;

    int n, t;
    const ll M = 1e18;
    cin >> n >> t;

    vector<ll> v[2];
    v[0].resize (n);
    v[1].resize (n);

    for (int i = 0; i < n; i++) cin >> v[0][i] >> v[1][i];

    vector<ll> dp[2];
    dp[0].resize (n, M);
    dp[1].resize (n, M);

    dp[0][0] = abs (t - v[0][0]);
    dp[1][0] = abs (t - v[1][0]);

    for (int i = 1; i < n; i++){
        dp[0][i] = min (dp[0][i - 1] + abs (v[0][i] - v[0][i - 1]), dp[1][i - 1] + abs (v[0][i] - v[1][i - 1]));
        dp[1][i] = min (dp[0][i - 1] + abs (v[1][i] - v[0][i - 1]), dp[1][i - 1] + abs (v[1][i] - v[1][i - 1]));
    }

    cout << min (dp[0][n - 1], dp[1][n - 1]) << '\n';
}
