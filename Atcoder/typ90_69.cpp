#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

ll n, k;
ll ans;
const ll MOD = 1e9+7;

ll solve(ll x){
    if (x == 0) return 1;
    else if (x == 1) return k - 2;
    else{
        ll tmp = solve (x / 2);
        tmp *= tmp;
        tmp %= MOD;
        if (x & 1){
            tmp *= k - 2;
            tmp %= MOD;
            return tmp;
        }
        else{
            return tmp;
        }
    }
}

int main(){
	weakson;

    cin >> n >> k;
    
    if (n == 1) ans = k;
    else ans = (((solve (n - 2) * k) % MOD) * (k - 1)) % MOD;

    cout << ans << '\n';

    return 0;
}
