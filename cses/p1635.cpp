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
    for (int i = 1; i <= x; i++){
        for (int j = 0; j < n; j++){
            if (i - v[j] >= 0){
                dp[i] += dp[i - v[j]];
                dp[i] %= MOD;
            }
        }
    }

    cout << dp[x] << '\n';
}
