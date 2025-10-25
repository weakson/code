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

const ll M = 1e9 + 7;
const ll N = 1e6;
ll tab[N], tmp;

ll f_pow (ll x, ll n){
    if (n == 0) return 1;
    if (n == 1) return x;
    if (n < N && tab[n]) return tab[n];

    tmp = f_pow (x, n / 2) % M;
    if (n / 2 < N) tab[n / 2] = tmp;
    tmp = (tmp * tmp) % M;

    if (n & 1) return (tmp * x) % M;
    else return tmp;
}


int main(){
    weakson;

    ll x, n;
    while (cin >> x >> n){
        if (x == 1){
            cout << ((n + 2) * (n + 1) / 2) % M << '\n';
            continue;
        }

        memset (tab, 0, sizeof(ll) * N);
        tab[1] = x;

        ll x_p = f_pow (x, n - 1);
        ll mi = f_pow (x - 1, M - 2);

        cout << ((((((n + 1) * ((x_p * x) % M - 1)) % M + (n - 1) % M) % M) - ((x * ((x_p - 1) * mi) % M) % M)) * mi) % M << '\n';
    }
}
