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

int N, M;
int dx[4] = {0, -1, 0, 1};
int dy[4] = {-1, 0, 1, 0};
vector<vector<pii> > sp[4];
vector<vector<char> > v;
vector<vector<bool> > vis;
bool is_found = false;

pii find_path (int x, int y, int d){
    int nx = x + dx[d];
    int ny = y + dy[d];
    // cout << nx << ", " << ny << endl;
    if (sp[d][nx][ny] != make_pair(-1, -1)) return sp[d][nx][ny];
    if (v[x][y] == 'E'){
        is_found = true;
        return make_pair(x, y);
    }
    if (v[nx][ny] != '#'){
        return sp[d][x][y] = find_path (nx, ny, d);
    }
    else{
        return make_pair(x, y);
    }
}

int main(){
    weakson;

    cin >> N >> M;

    v.resize (N + 5, vector<char> (M + 5));
    vis.resize (N + 5, vector<bool> (M + 5));

    for (int i = 0; i < 4; i++){
        sp[i].resize (N + 5, vector<pii> (M + 5));
    }

    int si, sj;

    for (int i = 0; i <= N + 1; i++){
        for (int j = 0; j <= M + 1; j++){
            for (int k = 0; k < 4; k++) sp[k][i][j] = {-1, -1};
            if (i == 0 || j == 0 || i == N + 1 || j == M + 1){
                v[i][j] = '#';
                vis[i][j] = true;
            }
            else{
                cin >> v[i][j];
            }
            if (v[i][j] == 'S') si = i, sj = j;
        }
    }

    queue<pair<int, pii> > q;
    q.emplace (1, make_pair(si, sj));
    vis[si][sj] = true;

    int ans;

    while (!q.empty()){
        int cnt = q.front().F;
        int x = q.front().S.F;
        int y = q.front().S.S;
        q.pop();

        for (int i = 0; i < 4; i++){
            pii tmp = find_path (x, y, i);

            if (is_found){
                ans = cnt;
                break;
            }

            int tx = tmp.F;
            int ty = tmp.S;
            if (!vis[tx][ty]){
                q.emplace (cnt + 1, make_pair(tx, ty));
                vis[tx][ty] = true;
            }
        }
        if (is_found) break;
    }

    if (is_found) cout << ans << '\n';
    else cout << -1 << '\n';

}
