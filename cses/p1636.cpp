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

    const ll MOD = 1e9 + 7;
    ll n, x;
    cin >> n >> x;

    vector<ll> v(n);
    for (auto &i : v) cin >> i;

    vector<ll> dp(x + 1);
    dp[0] = 1;
    for (int i = 0; i < n; i++){
        for (int j = 1; j <= x; j++){
            if (j - v[i] >= 0){
                dp[j] += dp[j - v[i]];
                dp[j] %= MOD;
            }
        }
    }

    cout << dp[x] << '\n';
}
