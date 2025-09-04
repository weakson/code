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
vector<int> v, ans;
bitset<100> vis;

void dfs (int id, int prev){
    if (id == m){
        for (int i = 0; i < m; i++){
            cout << ans[i] << " \n"[i == m - 1];
        }
        return;
    }
    for (int i = prev + 1; i < n; i++){
        if (vis[i]) continue;
        vis[i] = true;
        ans.emplace_back (v[i]);
        dfs (id + 1, i);
        ans.pop_back();
        vis[i] = false;
    }
}

int main(){
    weakson;

    cin >> n >> m;
    v.resize(n);
    for (auto &i : v) cin >> i;

    dfs (0, -1);
}
