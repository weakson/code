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

    int n;
    cin >> n;

    vector<ll> v(n);
    for (auto &i : v) cin >> i;
    sort (v.begin(), v.end());

    ll ans = 0;
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            ll c_max = lower_bound (v.begin(), v.end(), v[i] + v[j]) - v.begin() - 1;
            ll c_min = upper_bound (v.begin(), v.end(), abs (v[i] - v[j])) - v.begin();
            if (c_max <= j) continue;
            else if (c_min <= j) ans += c_max - j;
            else ans += c_max - c_min + 1;
        }
    }

    cout << ans << '\n';

    return 0;
}
