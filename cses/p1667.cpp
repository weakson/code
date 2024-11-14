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
vector<int> parent;
bitset<100005> vis;

bool shortest_bfs (){
    queue<int> q;
    vis[1] = true;
    q.push (1);

    while (!q.empty()){
        int v = q.front();
        q.pop();

        for (auto u : g[v]){
            if (vis[u]) continue;
            vis[u] = true;
            parent[u] = v;
            if (u == n) return true;
            q.push (u);
        }
    }
    
    return false;
}

int main(){
	weakson;

    cin >> n >> m;

    g.resize (n + 1);
    parent.resize (n + 1);
    for (int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        g[a].emplace_back (b);
        g[b].emplace_back (a);
    }

    parent[1] = -1;
    if (shortest_bfs()){
        stack<int> stk;
        int NODE = n;
        while (NODE != -1){
            stk.push (NODE);
            NODE = parent[NODE];
        }

        cout << stk.size() << '\n';
        while (!stk.empty()){
            cout << stk.top() << ' ';
            stk.pop();
        }
    }
    else cout << "IMPOSSIBLE\n";
}
