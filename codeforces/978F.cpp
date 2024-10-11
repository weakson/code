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
    
    vector<ll> v(n + 1), s;
    for (int i = 1; i <= n; i++){
        cin >> v[i];
        s.emplace_back (v[i]);
    }

    sort (s.begin(), s.end());

    map<ll, ll> m;
    while (k--){
        ll a, b;
        cin >> a >> b;

        if (v[a] > v[b]) m[a]++;
        else if (v[b] > v[a]) m[b]++;
    }

    for (int i = 1; i <= n; i++){
        ll t = lower_bound (s.begin(), s.end(), v[i]) - s.begin();
        ll ans = t - m[i];
        if (ans < 0) cout << 0;
        else cout << ans;
        cout << " \n"[i == n];
    }
    
    return 0;
}
