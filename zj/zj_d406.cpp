#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define pii pair<int, int>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

int dx[5] = {0, -1, 0, 1, 0};
int dy[5] = {0, 0, 1, 0, -1};

int main(){
	weakson;

    int s, n, m, cs = 1;
    while (cin >> s >> n >> m){

        cout << "Case " << cs++ << ":\n";

        vector<vector<int> > v(n), vis(n);
        for (int i = 0; i < n; i++) v[i].resize(m);
        for (int i = 0; i < n; i++) vis[i].resize(m);


        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                cin >> v[i][j];
            }
        }

        queue<pair<pii, ll> > q;

        for (int i = 0; i < m; i++){
            if (v[0][i]){
                q.push ({{0, i}, 1});
                vis[0][i] = true;
            }
        }

        while (q.size()){
            int x = q.front().F.F;
            int y = q.front().F.S;
            int cnt = q.front().S;
            q.pop();
            v[x][y] = cnt;
            for (int i = s; i < 5; i++){
                int tx = x + dx[i];
                int ty = y + dy[i];
                if (tx < 0 || tx >= n || ty < 0 || ty >= m) continue;
                if (!vis[tx][ty] && v[tx][ty]){
                    q.push ({{tx, ty}, cnt + 1});
                    vis[tx][ty] = true;
                }
            }
        }

        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                if (i != 0 && v[i][j] == 1) cout << 0;
                else cout << v[i][j];
                cout << " \n"[j == m - 1];
            }
        }

    }
}
