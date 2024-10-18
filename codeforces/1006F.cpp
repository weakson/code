#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define pii pair<int, int>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

ll n, m, k, mid, ans;
vector<vector<ll> > v;
map<ll, ll> val[21][21];

void f_dfs (int x, int y, ll sum){
    if (x + y - 1 == mid){
        val[x][y][sum]++;
        return;
    }

    if (x + 1 <= n) f_dfs (x + 1, y, sum ^ v[x + 1][y]);
    if (y + 1 <= m) f_dfs (x, y + 1, sum ^ v[x][y + 1]);
}

void s_dfs (int x, int y, ll sum){
    if (x + y - 1 == mid){
        ll tmp = sum ^ k ^ v[x][y];
        if (val[x][y].find (tmp) != val[x][y].end()){
            ans += val[x][y][tmp];
        }
        return;
    }

    if (x - 1 >= 1) s_dfs (x - 1, y, sum ^ v[x - 1][y]);
    if (y - 1 >= 1) s_dfs (x, y - 1, sum ^ v[x][y - 1]);
}

int main(){
	weakson;

    cin >> n >> m >> k;

    mid = n + m >> 1;

    v.resize (n + 1);
    for (int i = 0; i <= n; i++) v[i].resize (m + 1);

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            cin >> v[i][j];
        }
    }

    f_dfs (1, 1, v[1][1]);
    s_dfs (n, m, v[n][m]);

    cout << ans << '\n';

    return 0;
}
