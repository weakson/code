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

int M, N;
ll ans;

bool col[15], q_rtl[15], q_ltr[15];
int r_rtl[15], r_ltr[15];

void dfs (int q, int r, int row){
    if (q == 0 && r == 0){
        ans++;
        return;
    }

    for (int i = 0; i < M + N; i++){
        if (r > 0 && !col[i] && !q_ltr[row + i] && !q_rtl[N + M + row - i]){
            col[i] = true;
            r_ltr[row + i]++;
            r_rtl[N + M + row - i]++;
            dfs (q, r - 1, row + 1);
            r_rtl[N + M + row - i]--;
            r_ltr[row + i]--;
            col[i] = false;
        }
        if (q > 0 && !col[i] && !q_ltr[row + i] && !q_rtl[N + M + row - i] && !r_ltr[row + i] && !r_rtl[N + M + row - i]){
            col[i] = q_ltr[row + i] = q_rtl[N + M + row - i] = true;
            dfs (q - 1, r, row + 1);
            col[i] = q_ltr[row + i] = q_rtl[N + M + row - i] = false;
        }
    }
}

int main(){
    weakson;

    int T; cin >> T;

    while (T--){
        cin >> M >> N;
        
        ans = 0;

        dfs (M, N, 0);

        cout << ans << '\n';
    }
}
