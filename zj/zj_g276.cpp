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

int n, m, k;
bool boom[105][105];
bool Explode[105][105];

bool is_in (int x, int y){
    return (x >= 0 && x < n && y >= 0 && y < m);
}

int main(){
    weakson;

    cin >> n >> m >> k;

    int r[505], c[505];
    int s[505], t[505];

    for (int i = 0; i < k; i++){
        cin >> r[i] >> c[i] >> s[i] >> t[i];
    }

    int cnt = 0;
    bool is_gone[505] = {};

    while (cnt < k){
        
        for (int i = 0; i < k; i++){
            if (is_gone[i]) continue;

            boom[r[i]][c[i]] = true;

            r[i] += s[i];
            c[i] += t[i];
        }

        for (int i = 0; i < k; i++){
            if (is_gone[i]) continue;

            if (!is_in (r[i], c[i])){
                is_gone[i] = true;
                cnt++;
            }
            else if (boom[r[i]][c[i]] != 0){
                is_gone[i] = true;
                cnt++;
                Explode[r[i]][c[i]] = true;
            }
        }

        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                if (Explode[i][j]){
                    boom[i][j] = false;
                    Explode[i][j] = false;
                }
            }
        }
    }

    int ans = 0;
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            //cout << boom[i][j] << ' ';
            if (boom[i][j]) ans++;
        }
        //cout << '\n';
    }

    cout << ans << '\n';
}
