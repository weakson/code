#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define pii pair<int, int>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

ll n, p;

ll plus_solve (ll x){
    ll cnt = 0;
    while (x){
        cnt += x % p;
        x /= p;
    }
    return 2 * cnt - 1;
}

ll minus_solve (ll x){
    ll cnt = 0;
    while (x){
        cnt += abs((p - 1) - x % p);
        x /= p;
    }
    return 2 * cnt - 1;
}

ll solve (ll x){
    ll cnt = 0;
    while (x){
        ll tmp = x % p;
        cnt += min (tmp, p - tmp);
        x /= p;
    }
    return 2 * cnt - 1;
}

int main(){
	weakson;

    cin >> n >> p;

    ll a = plus_solve(n);
    ll b = minus_solve(n);
    cout << min (a, b) << '\n';

    return 0;
}
