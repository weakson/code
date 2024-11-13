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

int n, q;
vector<vector<int> > g;
vector<int> a, b;
vector<ll> intime, outtime, dep;
bitset<200005> vis;
int tt, cnt;

void dfs (int v, int d){
    dep[v] = d;

    intime[v] = tt;
    tt++;

    for (auto u : g[v]){
        if (vis[u]) continue;
        vis[u] = true;
        dfs (u, d + 1);
    }

    outtime[v] = tt;
    tt++;
}

int main(){
	weakson;

    cin >> n;
    g.resize (n + 1);
    for (int i = 0; i < n - 1; i++){
        int x, y;
        cin >> x >> y;
        a.emplace_back (x);
        b.emplace_back (y);
        g[x].emplace_back (y);
        g[y].emplace_back (x);
    }

    intime.resize (n + 1);
    outtime.resize (n + 1);
    dep.resize (n + 1);
    vis[1] = true;
    dfs (1, 0);

    /*
    cout << endl << "dep : ";
    for (int i = 1; i <= n; i++) cout << dep[i] << ' ';
    cout << endl;
    */

    vector<ll> dis (2 * n + 1, 0);
    cin >> q;
    while (q--){
        int t, e, x;
        cin >> t >> e >> x;
        int v1 = a[e - 1];
        int v2 = b[e - 1];

        if (t == 1){
            if (dep[v1] < dep[v2]){
                dis[0] += x;
                dis[2 * n] += -x;

                dis[intime[v2]] += -x;
                dis[outtime[v2] + 1] += x;
            }
            else{
                dis[intime[v1]] += x;
                dis[outtime[v1] + 1] += -x;
            }
        }
        else{
            if (dep[v1] < dep[v2]){
                dis[intime[v2]] += x;
                dis[outtime[v2] + 1] += -x;
            }
            else{
                dis[0] += x;
                dis[2 * n] += -x;

                dis[intime[v1]] += -x;
                dis[outtime[v1] + 1] += x;
            }
        }
    }

    for (int i = 1; i < 2 * n; i++){
        dis[i] += dis[i - 1];
    }

    for (int i = 1; i <= n; i++){
        cout << dis[intime[i]] << '\n';
    }
}
