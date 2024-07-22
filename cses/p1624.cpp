#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define pii pair<int, int>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

vector<string> v(10);
bool board[10][10];
ll ans;

bool is_good (int x, int y){
    for (int i = 0; i < 8; i++){
        if (board[i][y]) return false;
    }
    for (int i = x - 1, j = y - 1; i >= 0 && j >= 0; i--, j--){
        if (board[i][j]) return false;
    }
    for (int i = x + 1, j = y + 1; i < 8 && j < 8; i++, j++){
        if (board[i][j]) return false;
    }
    for (int i = x - 1, j = y + 1; i >= 0 && j < 8; i--, j++){
        if (board[i][j]) return false;
    }
    for (int i = x + 1, j = y - 1; i < 8 && j >= 0; i++, j--){
        if (board[i][j]) return false;
    }

    return true;
}

void sol (int r){
    if (r == 8){
        ans++;
        return;
    }

    for (int i = 0; i < 8; i++){
        if (v[r][i] != '*' && is_good (r, i)){
            board[r][i] = true;
            sol (r + 1);
            board[r][i] = false;
        }
    }

    return;
}

int main(){
	weakson;

    for (int i = 0; i < 8; i++){
        cin >> v[i];
    }

    sol(0);

    cout << ans << '\n';

    return 0;
}
