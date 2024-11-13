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

vector<vector<int> > g;
bitset<10005> vis, node_col;
int n, cnt;

void dfs (int v, bool col){
    node_col[v] = col;
    if (cnt == n) return;
    for (auto u : g[v]){
        if (vis[u]) continue;
        vis[v] = true;
        cnt++;
        dfs (u, !col);
    }
}

int main(){
	weakson;

    cin >> n;

    g.resize (n + 1);
    for (int i = 0; i < n - 1; i++){
        int a, b;
        cin >> a >> b;
        g[a].emplace_back (b);
        g[b].emplace_back (a);
    }

    int ans = 1e9;
    for (int i = 1; i <= n; i++){
        cnt = 1;
        vis.reset();
        node_col.reset();
        dfs (i, false);
        int col_1 = node_col.count();
        int col_2 = n - col_1;
        ans = min ({ans, col_1, col_2});
    }

    int ans1 = 0, ans2 = 0;
    for (int i = 1; i <= n; i++) (node_col[i] ? ans1++ : ans2++);

    cout << min (ans1, ans2) << '\n';
}
