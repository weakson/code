#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define pii pair<int, int>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

vector<vector<ll> > p;

int main(){
	weakson;

    ll n, l, w;
    cin >> n >> l >> w;

    vector<ll> x(n + 1), y(n + 1), vx(n + 1), vy(n + 1);
    vx[0] = vy[0] = -1;
    for (int i = 1; i <= n; i++){
        cin >> x[i] >> y[i];
        vx[i] = x[i];
        vy[i] = y[i];
    }

    sort (vx.begin(), vx.end());
    vx.resize (unique (vx.begin(), vx.end()) - vx.begin()); 
    sort (vy.begin(), vy.end());
    vy.resize (unique (vy.begin(), vy.end()) - vy.begin());

    p.resize (n + 1);
    for (int i = 0; i <= n; i++) p[i].resize (n + 1);

    for (int i = 1; i <= n; i++){
        ll tx = lower_bound (vx.begin(), vx.end(), x[i]) - vx.begin();
        ll ty = lower_bound (vy.begin(), vy.end(), y[i]) - vy.begin();
        p[tx][ty]++;
    }

    ll ans = -1;
    for (int rx = 1, lx = 1; rx < vx.size(); rx++){
        while (vx[rx] - vx[lx] > w) lx++;
        for (int ry = 1, ly = 1; ry < vy.size(); ry++){
            p[rx][ry] += p[rx - 1][ry] + p[rx][ry - 1] - p[rx - 1][ry - 1];
            while (vy[ry] - vy[ly] > l) ly++;
            ll tmp = p[rx][ry] - p[lx - 1][ry] - p[rx][ly - 1] + p[lx - 1][ly - 1];
            ans = max (ans, tmp);
        }
    }

    cout << ans << '\n';

    return 0;
}
