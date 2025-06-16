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

int main(){
    weakson;

    int m, n, k;
    cin >> m >> n >> k;

    string s[35];

    for (int i = 0; i < m; i++) cin >> s[i];

    int pos[35] = {}, ans = 0;

    while (k--){
        for (int i = 0; i < m; i++){
            int x; cin >> x;
            pos[i] = abs((n + pos[i] - x % n) % n);
        }
        for (int i = 0; i < n; i++){
            int alp[30] = {}, M = -1;
            for (int j = 0; j < m; j++){
                int cur_pos = (i + pos[j]) % n;
                alp[s[j][cur_pos] - 'a']++;
                M = max (M, alp[s[j][cur_pos] - 'a']);
            }
            ans += M;
        }
    }

    cout << ans << '\n';
}
