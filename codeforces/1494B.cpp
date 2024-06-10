#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define pii pair<int, int>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

int main(){
	weakson;

    int t;
    cin >> t;

    while (t--){
        int n, u, r, d, l;
        cin >> n >> u >> r >> d >> l;

        int cor[4];
        bool is_ok = false;
        for (int i = 0; i < 16; i++){
            for (int j = 0; j < 4; j++){
                if ((1 << j) & i) cor[j] = 1;
                else cor[j] = 0;
            }
            int un = cor[0] + cor[1];
            int rn = cor[1] + cor[2];
            int dn = cor[2] + cor[3];
            int ln = cor[3] + cor[0];
            
            bool m = (u >= un && r >= rn && d >= dn && l >= ln);
            bool M = (u <= un + n - 2 && r <= rn + n - 2 && d <= dn + n - 2 && l <= ln + n - 2);
            is_ok |= m && M;
        }
        if (is_ok) cout << "YES\n";
        else cout << "NO\n";
    }
}
