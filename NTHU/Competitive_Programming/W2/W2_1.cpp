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

int dr[4] = {0, -1, 0, 1};
int dc[4] = {-1, 0, 1, 0};

string s;
ll ans = 0;
bool vis[10][10], vl, vr, vu, vd;
int ins[100];

void dfs (int r, int c, int id){

    if (id == 48 && r != 7 && c != 1) return;

    if (r == 7 && c == 1){
        if (id == 48) ans++;
        return;
    }

    vl = vis[r + dr[0]][c + dc[0]];
    vr = vis[r + dr[2]][c + dc[2]];
    vu = vis[r + dr[1]][c + dc[1]];
    vd = vis[r + dr[3]][c + dc[3]];
    if ((vl && vr) && !(vu || vd)) return;
    if (!(vl || vr) && (vu && vd)) return;

    vis[r][c] = true;

    for (int i = 0; i < 4; i++){
        if (ins[id] == i || ins[id] == -1){
            int tr = r + dr[i];
            int tc = c + dc[i];
            if (!vis[tr][tc]) dfs (tr, tc, id + 1);
        }
    }

    vis[r][c] = false;
}

int main(){
    weakson;

    cin >> s;

    for (int i = 0; i < s.size(); i++){
        if (s[i] == 'L') ins[i] = 0;
        else if (s[i] == 'U') ins[i] = 1;
        else if (s[i] == 'R') ins[i] = 2;
        else if (s[i] == 'D') ins[i] = 3;
        else ins[i] = -1;
    }

    for (int i = 0; i <= 8; i++){
        vis[0][i] = true;
        vis[8][i] = true;
        vis[i][0] = true;
        vis[i][8] = true;
    }

    dfs (1, 1, 0);

    cout << ans << '\n';
}
