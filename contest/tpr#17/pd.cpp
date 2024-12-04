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

int n, m, diff, cnt;
vector<bool> col, col_new;
vector<int> g[5005];
bool is = true;
bitset<5005> vis;

void dfs (int v, bool color){
    vis[v] = true;
    col_new[v] = color;
    cnt++;
    if (color != col[v]) diff++;

    for (auto u : g[v]){
        if (vis[u] && col_new[u] == color){
            is = false;
        }
        if (!vis[u]){
            dfs (u, !color);
        }
    }
}

int main(){
	weakson;

    cin >> n >> m;

    col.resize (n + 1);
    for (int i = 1; i <= n; i++){
        int tmp; cin >> tmp;
        col[i] = tmp;
    }

    for (int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        g[a].emplace_back (b);
        g[b].emplace_back (a);
    }

    col_new.resize (n + 1);
    int ans = 0;
    for (int i = 1; i <= n; i++){
        if (!vis[i]){
            diff = 0, cnt = 0;
            dfs (i, 0);
            ans += min (diff, cnt - diff);
        }
        if (!is) break;
    }

    if (!is) cout << "-1\n";
    else cout << ans << '\n';

    return 0;
}
