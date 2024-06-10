#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define pii pair<int, int>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

vector<ll> g[3005];
vector<pll> dis[3005];
int ans[3005];
const ll INF = 1e18;
bitset<500005> visited;

void dfs (int o, int u, int d){
    visited[u] = true;
    while (!dis[o].empty() && d > dis[o].back().S){
        dis[o].pop_back();
    }
    if (dis[o].empty() || d == dis[o].back().S){
        dis[o].emplace_back (make_pair(u, d));
    }
    for (int v : g[u]){
        if (!visited[v]){
            dfs (o, v, d + 1);
        }
    }
    return;
}

int main(){
	weakson;

    int n, q;
    cin >> n >> q;

    for (int i = 0; i < n - 1; i++){
        int u, v;
        cin >> u >> v;
        g[u].emplace_back (v);
        g[v].emplace_back (u);
    }

    for (int i = 1; i <= n; i++){
        visited.reset();
        dfs (i, i, 0);
    }

    while (q--){
        int op;
        cin >> op;
        if (op == 1){
            int u, c;
            cin >> u >> c;
            for (auto i : dis[u]){
                dbg (i.F);
                ans[i.F] += c;
            }
            cout << '\n';
        }
        else{
            int u;
            cin >> u;
            cout << ans[u] << '\n';
        }
    }

    return 0;
}
