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

const int N = 8;
int ans = 0;
string g[8];
bitset<20> col, ltr, rtl;

bool check (int r, int c){
    return (!col[c] && !ltr[r + c] && !rtl[N + r - c] && g[r][c] == '.');
}

void dfs (int row){
    if (row == N){
        ans++;
        return;
    }
    for (int i = 0; i < N; i++){
        if (check (row, i)){
            col[i] = true;
            ltr[row + i] = true;
            rtl[N + row - i] = true;
            dfs (row + 1);
            rtl[N + row - i] = false;
            ltr[row + i] = false;
            col[i] = false;
        }
    }
}

int main(){
    weakson;

    for (int i = 0; i < N; i++){
        cin >> g[i];
    }

    dfs (0);

    cout << ans << '\n';
}
