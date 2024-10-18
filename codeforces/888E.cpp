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

    ll n, m;
    cin >> n >> m;

    vector<ll> a, b;
    for (int i = 0; i < n; i++){
        ll tmp; cin >> tmp;
        if (i < n / 2) a.emplace_back (tmp);
        else b.emplace_back (tmp);
    }

    set<ll> s;
    ll ans = -1;
    for (int i = 0; i < (1 << a.size()); i++){
        ll sum = 0;
        for (int j = 0; j < a.size(); j++){
            if ((1 << j) & i){
                sum += a[j] % m;
                sum %= m;
            }
        }
        ans = max (ans, sum);
        s.insert (sum);
    }

    for (int i = 0; i < (1 << b.size()); i++){
        ll sum = 0;
        for (int j = 0; j < b.size(); j++){
            if ((1 << j) & i){
                sum += b[j] % m;
                sum %= m;
            }
        }
        ans = max (ans, sum);

        auto it = s.upper_bound (m - sum - 1);
        if (it == s.begin()) continue;

        ans = max (ans, sum + *--it);
    }

    cout << ans << '\n';
}
