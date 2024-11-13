#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define pii pair<int, int>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

string s, t;

int main(){
	weakson;

    cin >> s >> t;

    vector<ll> dp[2];
    int n = s.size(), m = t.size();
    dp[0].resize (m + 1);
    dp[1].resize (m + 1);

    /*
    cout << "+\t";
    for (auto k : t) cout << k << '\t';
    cout << endl;
    */

    ll ans = -1e18;
    int from = 0, to = 1;
    for (int i = 0; i < n; i++){
        for (int j = 1; j <= m; j++){
            if (s[i] == t[j - 1]) dp[to][j] = dp[from][j - 1] + 8;
            else dp[to][j] = max ({0LL, max (dp[from][j], dp[to][j - 1]) - 3, dp[from][j - 1] - 5});
            ans = max (ans, dp[to][j]);
        }

        /*
        cout << s[i] << '\t';
        for (int k = 1; k <= m; k++){
            cout << dp[to][k] << '\t';
        }
        cout << endl;
        */

        swap (from, to);
    }

    cout << ans << '\n';
}
