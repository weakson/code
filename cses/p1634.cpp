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

    int n, x;
    cin >> n >> x;

    vector<ll> v(n);
    for (auto &i : v) cin >> i;

    vector<ll> dp(x + 1, 1e15);
    dp[0] = 0;
    for (int i = 1; i <= x; i++){
        for (int j = 0; j < n; j++){
            if (i - v[j] >= 0) dp[i] = min (dp[i], dp[i - v[j]] + 1);
        }
    }

    if (dp[x] != 1e15) cout << dp[x] << '\n';
    else cout << -1 << '\n';
}
