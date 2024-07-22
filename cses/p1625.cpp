#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define pii pair<int, int>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

string s;
bool grid[10][10];
int op[50];
int dir_x[4] = {0, -1, 0, 1};
int dir_y[4] = {-1, 0, 1, 0};
ll ans;

void solve (int x, int y, int pos){
    if (x == 7 && y == 1){
        if (pos == 48) ans++;
        return;
    }

    if (grid[x - 1][y] && grid[x + 1][y] && grid[x][y - 1] && grid[x][y + 1]){
        return;
    }

    if (grid[x - 1][y] && grid[x + 1][y]){
        if (!grid[x][y - 1] && !grid[x][y + 1]){
            return;
        }
    }

    if (grid[x][y - 1] && grid[x][y + 1]){
        if (!grid[x - 1][y] && !grid[x + 1][y]){
            return;
        }
    }

    grid[x][y] = true;

    if (op[pos] < 4){
        int tx = x + dir_x[op[pos]];
        int ty = y + dir_y[op[pos]];
        if (!grid[tx][ty]) solve (tx, ty, pos + 1);
    }
    else{
        for (int i = 0; i < 4; i++){
            int tx = x + dir_x[i];
            int ty = y + dir_y[i];
            if (!grid[tx][ty]) solve (tx, ty, pos + 1);
        }
    }

    grid[x][y] = false;

    return;
}

int main(){
	weakson;

    cin >> s;

    for (int i = 0; i < 48; i++){
        if (s[i] == 'L') op[i] = 0;
        else if (s[i] == 'U') op[i] = 1;
        else if (s[i] == 'R') op[i] = 2;
        else if (s[i] == 'D') op[i] = 3;
        else op[i] = 4;
    }

    for (int i = 0; i <= 8; i++){
        for (int j = 0; j <= 8; j++){
            if (i == 0 || i == 8 || j == 0 || j == 8){
                grid[i][j] = true;
            }
        }
    }

    grid[1][1] = true;
    solve (1, 1, 0);

    cout << ans << '\n';

    return 0;
}
