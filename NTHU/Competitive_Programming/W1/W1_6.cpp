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

ll g[5][5];
ll Min = 1e18;
vector<int> ans, v;
bitset<50> vis;
// id -> (r, c); r = id / 5, c = id % 5
// (r, c) -> id; id = r * 5 + c

void dfs (int id, int prev){
    if (id == 5){
        ll sum = 0;
        for (int i = 0; i < 5; i++){
            for (int j = 0; j < 5; j++){
                ll tmp = 1e18;
                for (int k = 0; k < 5; k++){
                    int r = v[k] / 5;
                    int c = v[k] % 5;
                    tmp = min (tmp, (long long)(abs(r - i) + abs(c - j)));
                }
                sum += tmp * g[i][j];
            }
        }
        if (sum < Min){
            Min = sum;
            ans = v;
        }
        return;
    }
    for (int i = prev + 1; i < 25; i++){
        if (vis[i]) continue;
        vis[i] = true;
        v.emplace_back (i);
        dfs (id + 1, i);
        v.pop_back();
        vis[i] = false;
    }
}

int main(){
    weakson;

    int t; cin >> t;

    while (t--){
        
        for (int i = 0; i < 5; i++){
            for (int j = 0; j < 5; j++){
                g[i][j] = 0;
            }
        }

        int n; cin >> n;

        for (int i = 0; i < n; i++){
            int r, c, p;
            cin >> r >> c >> p;

            g[r][c] = p;
        }

        Min = 1e18;
        vis.reset();

        dfs (0, -1);

        for (auto i : ans) cout << i << ' ';
        cout << '\n';

    }
}
