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

int n, m;
vector<vector<int> > g;
bitset<100005> vis;
vector<int> col;
int init;
bool is_valid = true;

void dfs (int v, bool cc){
    col[v] = cc;
    
    for (auto u : g[v]){
        if (vis[u] && col[u] == cc){
            is_valid = false;
            return;
        }
        else if (vis[u]) continue;

        vis[u] = true;
        dfs (u, !cc);
    }
}

int main(){
	weakson;

    int n, m;
    cin >> n >> m;

    g.resize (n + 1);
    for (int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        g[a].emplace_back (b);
        g[b].emplace_back (a);
    }

    col.resize (n + 1);
    for (int i = 1; i <= n; i++){
        if (vis[i]) continue;
        vis[i] = true;
        init = i;
        dfs (i, 0);
    }

    if (!is_valid) cout << "IMPOSSIBLE\n";
    else{
        for (int i = 1; i <= n; i++){
            cout << col[i] + 1 << ' ';
        }
        cout << '\n';
    }
}
