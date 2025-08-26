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

    ll n, m;
    cin >> n >> m;

    vector<ll> A(n), B(n);

    for (ll &i : A) cin >> i;
    for (ll &i : B) cin >> i;

    bitset<100005> dp[2];

    bool cur = 0;

    dp[0][A[0] % m] = true;
    dp[0][B[0] % m] = true;

    for (int i = 1; i < n; i++){

        bool nxt = cur ^ 1;

        dp[nxt].reset();

        for (ll j = 0; j < m; j++){

            if (!dp[cur][j]) continue;

            dp[nxt][(j * (A[i] % m)) % m] = true;
            dp[nxt][(j * (B[i] % m)) % m] = true;
        }

        cur ^= 1;
    }

    for (int i = m - 1; i >= 0; i--){
        if (dp[cur][i]){
            cout << i << '\n';
            break;
        }
    }
}
