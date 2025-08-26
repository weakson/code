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

int main(){
    weakson;

    int n, m;
    cin >> n >> m;

    vector<ll> A(n), B(n);
    
    for (ll &i : A) cin >> i;
    for (ll &i : B) cin >> i;

    ll ans = -1e18;

    for (int i = 0; i < (1LL << n); i++){
        ll tmp = 1;
        vector<ll> v;
        for (int j = 0; j < n; j++){
            if (i & (1LL << j)) tmp *= A[j] % m, v.push_back(A[j]);
            else tmp *= B[j] % m, v.push_back(B[j]);
            tmp %= m;
        }
        ans = max (tmp, ans);
    }

    cout << ans << '\n';

}
