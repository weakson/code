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

int m, n, k;

bool is_valid (int x, int y){
    return (x >= 0 && x < m && y >= 0 && y < n);
}

int main(){
    weakson;

    cin >> m >> n >> k;

    string g[25];

    for (int i = 0; i < m; i++){
        cin >> g[i];
    }

    int x = m - 1, y = 0;

    int dx[6] = {-1, 0, 1, 1, 0, -1};
    int dy[6] = {0, 1, 1, 0, -1, -1};

    bool alp[52] = {};

    while (k--){
        int op; cin >> op;

        if (is_valid (x + dx[op], y + dy[op])){
            x += dx[op];
            y += dy[op];
        }

        cout << g[x][y];
        if (g[x][y] >= 'A' && g[x][y] <= 'Z') alp[g[x][y] - 'A'] = true;
        else alp[g[x][y] - 'a' + 26] = true;
    }

    cout << '\n';

    int ans = 0;
    for (int i = 0; i < 52; i++) ans += alp[i];

    cout << ans << '\n';
}
