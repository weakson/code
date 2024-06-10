#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define pii pair<int, int>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

ll n, g1, g2, t;

bool cmp (ll a, ll b){
    return a > b;
}

int main(){
	weakson;

    cin >> n >> g1 >> g2 >> t;

    vector<ll> a(n), b(n);

    ll b_sum = 0;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++){
        cin >> b[i];
        b_sum += b[i];
    }
    sort (a.begin(), a.end(), cmp);
    sort (b.begin(), b.end(), cmp);

    ll a_sum = 0, ptr = n, ans = 1e18;
    for (ll i = 0; i < n; i++){
        while (a_sum + b_sum >= t){
            ans = min (ans, i * g1 + ptr * g2);
            if (ptr == 0) break;
            b_sum -= b[--ptr];
        }
        a_sum += a[i];
    }

    if (ans == 1e18) cout << -1 << '\n';
    else cout << ans << '\n';

    return 0;
}
