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

    int n, m;
    cin >> n >> m;

    vector<ll> s(n + 5), t(n + 5), q(n);
    for (int i = 1; i <= n; i++) cin >> s[i];
    for (int i = 1; i <= n; i++) cin >> t[i];
    for (int i = 0; i < n; i++) cin >> q[i];

    vector<ll> cnt(n + 5, 0);

    while (q.size() > 1){
        vector<ll> w, l;
        for (int i = 0; i < q.size() - 1; i += 2){
            int x = q[i];
            int y = q[i + 1];
            ll a = s[x], b = t[x];
            ll c = s[y], d = t[y];
            if (a * b >= c * d){
                s[x] = a + c * d / (2 * b);
                t[x] = b + c * d / (2 * a);
                s[y] = c + c / 2;
                t[y] = d + d / 2;
                w.emplace_back (x);
                if (++cnt[y] < m) l.emplace_back (y);
            }
            else {
                s[y] = c + a * b / (2 * d);
                t[y] = d + a * b / (2 * c);
                s[x] = a + a / 2;
                t[x] = b + b / 2;
                w.emplace_back (y);
                if (++cnt[x] < m) l.emplace_back (x);
            }
        }
        if (q.size() & 1) w.emplace_back (q.back());
        q = w;
        for (int i = 0; i < l.size(); i++) q.emplace_back (l[i]);
    }
    cout << q[0] << '\n';
    return 0;
}
