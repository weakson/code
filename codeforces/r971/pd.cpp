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

    ll t;
    cin >> t;

    while (t--){
        ll n;
        cin >> n;

        vector<bool> b[2];
        b[0].resize(n + 5, 0);
        b[1].resize(n + 5, 0);
        vector<pll> v(n + 5);
        vector<ll> cnt(2, 0);

        for (int i = 0; i < n; i++){
            ll x, y;
            cin >> x >> y;
            v[i].F = x;
            v[i].S = y;
            b[y][x] = true;
            cnt[y]++;
        }

        ll ans = 0;

        for (int i = 0; i < n; i++){
            if (b[!v[i].S][v[i].F])
                ans += cnt[v[i].S] - 1;
            if (v[i].F == 0) continue;
            if (b[!v[i].S][v[i].F - 1] && b[!v[i].S][v[i].F + 1])
                ans++;
        }

        cout << ans << '\n';
    }
    return 0;
}
