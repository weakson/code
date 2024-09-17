#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define pii pair<int, int>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

ll n, x, y;
vector<ll> pu, pd, pl, pr;

bool is_good (int l, int r){
    ll tx = pr[l - 1] + pr[n] - pr[r] - (pl[l - 1] + pl[n] - pl[r]);
    ll ty = pu[l - 1] + pu[n] - pu[r] - (pd[l - 1] + pd[n] - pd[r]);
    ll tmp = r - l + 1;
    ll lt = abs (tx - x) + abs (ty - y);
    if (tmp == lt) return true;
    else if (tmp > lt && (tmp - lt) % 2 == 0) return true;
    else return false;
}

int main(){
	weakson;
    
    string s;
    cin >> n >> s;
    pu.resize (n + 1);
    pd.resize (n + 1);
    pl.resize (n + 1);
    pr.resize (n + 1);

    cin >> x >> y;

    for (int i = 1; i <= n; i++){
        pu[i] = pu[i - 1];
        pd[i] = pd[i - 1];
        pl[i] = pl[i - 1];
        pr[i] = pr[i - 1];
        if (s[i - 1] == 'U') pu[i]++;
        if (s[i - 1] == 'D') pd[i]++;
        if (s[i - 1] == 'L') pl[i]++;
        if (s[i - 1] == 'R') pr[i]++;
    }

    ll num = abs (x) + abs (y);
    if (pu[n] - pd[n] == y && pr[n] - pl[n] == x){
        cout << 0 << '\n';
        return 0;
    }
    if (num > n || (n - num) % 2 == 1){
        cout << -1 << '\n';
        return 0;
    }

    ll l = 1, r = 1;
    ll ans = 1e9;
    while (l <= n){
        while (r <= n && !is_good (l, r)){
            r++;
        }

        if (r > n && is_good (l, n)){
            ans = min (ans, n - l + 1);
        }
        else if (r <= n && is_good (l, r)){
            ans = min (ans, r - l + 1);
        }

        l++;
    }

    cout << ans << '\n';

    return 0;
}
