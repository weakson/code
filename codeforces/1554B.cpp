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

    int t;
    cin >> t;

    while (t--){
        ll n, k;
        cin >> n >> k;

        vector<ll> v(n + 10);
        for (int i = 1; i <= n; i++) cin >> v[i];

        ll s = max (1LL, n - 2 * k - 1);

        ll ans = -1e15;
        for (ll i = s; i <= n; i++){
            for (ll j = i + 1; j <= n; j++){
                ans = max (ans, i * j - k * (v[i] | v[j]));
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
