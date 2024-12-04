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

    int t;
    cin >> t;

    while (t--){
        int n, m;
        cin >> n >> m;

        vector<ll> M(n), F(m);
        for (int i = 0; i < n; i++) cin >> M[i];
        for (int i = 0; i < m; i++) cin >> F[i];

        sort (M.begin(), M.end());
        sort (F.begin(), F.end());
        
        int i = 0, j = 0, ans = 0;
        while (i < n && j < m){
            if (F[j] <= M[i]){
                M[i] -= F[j];
                j++;
                ans++;
            }
            else i++;
        }

        cout << ans << '\n';
    }
}
