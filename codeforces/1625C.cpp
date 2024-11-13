#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define pii pair<int, int>
#define swap(a,b) a ^= b ^= a ^= b
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

vector<vector<ll> > dp;
vector<pll> v;
const ll MAX = 1e18;

ll cnt_time (int a, int b){
    if (a > b) swap (a, b);
    return (v[b].F - v[a].F) * v[a].S;
}

int main(){
	weakson;

    ll n, l, k;
    cin >> n >> l >> k;

    v.resize (n);
    for (int i = 0; i < n; i++) cin >> v[i].F;
    for (int i = 0; i < n; i++) cin >> v[i].S;
    v.emplace_back (l, 0);

    dp.resize (k + 1);
    for (int i = 0; i <= k; i++){
        dp[i].resize (n + 1, MAX);
        dp[i][0] = 0;
    }

    for (int i = 1; i <= n; i++){
        dp[0][i] = dp[0][i - 1] + cnt_time (i - 1, i);
    }

    ll ans = dp[0][n];
    for (int i = 1; i <= n; i++){
        for (int t = 1; t <= k; t++){
            for (int prev = 0; prev < i; prev++){
                int time_left = t - (i - prev - 1);
                if (time_left < 0) continue;
                dp[t][i] = min (dp[t][i], dp[time_left][prev] + cnt_time (prev, i));
            }
        }
    }

    for (int i = 0; i <= k; i++) ans = min (dp[i][n], ans);

    cout << ans << '\n';
    
}
