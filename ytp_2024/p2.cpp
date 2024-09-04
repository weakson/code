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

    ll n, k;
    cin >> n >> k;

    vector<ll> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    sort (v.begin(), v.end());

    ll ans = 5e18;
    for (int i = 0; i < n; i++){
        if (v[i] == 0) continue;
        auto p = lower_bound (v.begin(), v.end(), k / v[i]);
        ll j = *p;
        ll j_1;
        if (p - 1 >= v.begin()) j_1 = *(p - 1);
        ll j_2 = *upper_bound (v.begin(), v.end(), k / v[i]);
        ans = min (ans, abs (k - j_2 * v[i]));
        ans = min (ans, abs (k - j * v[i]));
        if (p - 1 >= v.begin()) ans = min (ans, abs (k - j_1 * v[i]));
    }

    cout << ans << '\n';
}
