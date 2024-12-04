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

bool is;
int n, m, p, k;
vector<vector<int> > g;
bitset<20005> vis, color;

void dfs (int x, bool col){
    vis[x] = true;
    color[x] = col;
    
    for (auto u : g[x]){
        if (vis[u] && color[u] == col){
            is = false;
            return;
        }
        if (!vis[u]){
            dfs (u, !col);
        }
    }
    
}

int main(){
	weakson;
    
    cin >> n >> m;

    vector<vector<int> > v;
    g.resize (n);
    v.resize (n);

    for (int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        v[a].emplace_back (b);
        v[b].emplace_back (a);
    }

    cin >> p >> k;

    for (int i = 1; i <= p; i++){
        g = v;
        for (int j = 0; j < k; j++){
            int a, b;
            cin >> a >> b;
            g[a].emplace_back (b);
            g[b].emplace_back (a);
        }

        is = true;
        vis.reset();
        color.reset();

        for (int j = 0; j < n; j++){
            if (!vis[j]) dfs (j, 0);
            if (!is) break;
        }

        if (!is) cout << i << '\n';
        else v = g;
    }
}
