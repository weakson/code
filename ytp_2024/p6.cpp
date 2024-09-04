#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define pii pair<int, int>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

vector<vector<int> > g(205);
vector<int> v(250);
vector<ll> ans;
set<bitset<250> > vis;

void dfs(int u, int sum, bitset<250> b){
    if (vis.insert (b).second == true){
        ans.emplace_back (sum);
    }
    for (auto i : g[u]){
        if (!b[i]){
            b[i] = 1;
            dfs (i, sum + v[i], b);
            b[i] = 0;
        }
    }
    return;
}

int main(){
	weakson;

    int n, k;
    cin >> n >> k;

    for (int i = 1; i <= n; i++) cin >> v[i];

    for (int i = 1; i < n; i++){
        int a, b;
        cin >> a >> b;
        g[a].emplace_back(b);
        g[b].emplace_back(a);
    }

    for (int i = 1; i < n; i++){
        bitset<250> b;
        b[i] = 1;
        dfs (i, v[i], b);
    }

    sort (ans.begin(), ans.end());

    cout << ans[k - 1] << '\n';

    return 0;
}
