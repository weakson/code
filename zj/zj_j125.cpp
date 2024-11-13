#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define pii pair<int, int>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

int n;
vector<vector<ll> > g;
vector<ll> h(90005, 1e15);

struct node{
    ll cnt, x, y, mh;

    node (ll a, ll b, ll c, ll d): cnt{a}, x{b}, y{c}, mh{d} {}
};

int dx[4] = {0, -1, 0, 1};
int dy[4] = {-1, 0, 1, 0};

bool check (ll x){
    vector<vector<bool> > vis;
    vis.resize (n);
    for (auto &i : vis) i.resize (n);

    queue<node> q;
    q.push ({0, 0, 0, g[0][0]});

    bool is_found = false;
    while (!q.empty()){
        node tmp = q.front();
        q.pop();

        ll cnt = tmp.cnt;
        ll x = tmp.x;
        ll y = tmp.y;
        ll mh = tmp.mh;

        if (x == n - 1 && y == n - 1){
            h[cnt] = min (h[cnt], mh);
            is_found = true;
        }

        for (int i = 0; i < 4; i++){
            ll tx = x + dx[i];
            ll ty = y + dy[i];
            if (tx >= 0 && tx < n){
                if (ty >= 0 && ty < n){
                    if (!vis[tx][ty]){
                        dbg (tx);
                        dbg (ty);
                        dbg (cnt + 1);
                        cout << endl;
                        ll MH = abs (g[x][y] - g[tx][ty]);
                        MH = max (MH, mh);
                        node nd (cnt + 1, tx, ty, MH);
                        q.push (nd);
                        vis[tx][ty] = true;
                    }
                }
            }
        }
    }
    return is_found;
}

int main(){
	weakson;

    cin >> n;

    g.resize (n);
    for (auto &i : g) i.resize (n);


    for (auto &i : g){
        for (auto &j : i) cin >> j;
    }

    ll M = n * n - 1, m = 2 * n - 2;
    ll p = M;
    for (ll j = M / 2; j > 0; j /= 2){
        while (p - j >= m && check (p - j)) p -= j;
    }

    cout << h[p] << '\n' << p << '\n';
}
