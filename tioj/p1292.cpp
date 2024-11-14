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

int n;
vector<vector<int> > g;
vector<int> dp[2];

void dfs (int v, int fat){
    dp[0][v] = 0;
    dp[1][v] = 1;

    for (auto u : g[v]){
        if (u == fat) continue;
        dfs (u, v);
        dp[0][v] += dp[1][u];
        dp[1][v] += min (dp[0][u], dp[1][u]);
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

    dp[0].resize(n + 1);
    dp[1].resize(n + 1);

    dfs (1, -1);

    cout << min (dp[0][1], dp[1][1]) << '\n';
}
