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

int dr[2] = {0, 1};
int dc[2] = {1, 0};

int main(){
    weakson;

    ll k, n, m;
    cin >> k >> n >> m;

    vector<ll> a(n), b(m);
    for (auto &i : a) cin >> i;
    for (auto &i : b) cin >> i;

    a.emplace_back (5e18);
    b.emplace_back (5e18);

    ll ar, ac, ad, br, bc, bd, pa, pb, t = 1;
    ar = ac = br = bc = pa = pb = 0;
    ad = 0, bd = 1;

    ll nar, nac, nbr, nbc, dt, ans = 0;
    bool is_a, can_break = false;
    while (true){

        is_a = true;

        if (pa == n && pb == m){
            dt = k - t + 1;
            can_break = true;
        }
        else if (pa < n && a[pa] <= b[pb]){
            dt = a[pa++] - t;
        }
        else if (pb < m && b[pb] < a[pa]){
            dt = b[pb++] - t;
            is_a = false;
        }

        nar = ar + dt * dr[ad];
        nac = ac + dt * dc[ad];
        nbr = br + dt * dr[bd];
        nbc = bc + dt * dc[bd];

        if (ad == bd && ar == br && ac == bc){
            ans += nac - ac + nar - ar;
        }
        else if (ad != bd){
            if (ad == 1 && bc < ac && nbc >= ac) ans++;
            else if (bd == 1 && ac < bc && nac >= bc) ans++;
        }
        
        ar = nar;
        ac = nac;
        br = nbr;
        bc = nbc;

        t += dt;

        is_a ? ad ^= 1 : bd ^= 1;

        if (can_break) break;
    }

    cout << k - ans << ' ' << k - ans << ' ' << ans << '\n';

}
