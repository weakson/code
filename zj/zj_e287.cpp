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

int n, m, g[105][105];
bool vis[105][105];
const int M = 1e8;

int di[4] = {0, -1, 0, 1};
int dj[4] = {-1, 0, 1, 0};

bool can_go (int i, int j){
    return ((i >= 0) && (i < n) && (j >= 0) && (j < m) && !vis[i][j]);
}

int main(){
    weakson;

    int Min = M, si, sj;
    cin >> n >> m;
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> g[i][j];
            if (g[i][j] < Min){
                Min = g[i][j];
                si = i;
                sj = j;
            }
        }
    }


    int i = si, j = sj;
    ll sum = 0;

    while (true){

        sum += g[i][j];
        vis[i][j] = true;
        int ni, nj;
        Min = M;

        for (int k = 0; k < 4; k++){
            int ti = i + di[k];
            int tj = j + dj[k];
            if (can_go(ti, tj)){
                if (g[ti][tj] < Min){
                    Min = g[ti][tj];
                    ni = ti;
                    nj = tj;
                }
            }
        }

        if (Min == M) break;

        i = ni;
        j = nj;
    }

    cout << sum << '\n';
}
