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

    int n, m, k;
    cin >> n >> m >> k;

    int Q[55][55] = {};
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> Q[i][j];
        }
    }

    ll ans = 1e18;

    while (k--){
        
        ll Flow[55][55]; // Flow[i][j] == Flow from i to j

        for (int i = 0; i < m; i++){
            for (int j = 0; j < m; j++){
                Flow[i][j] = 0;
            }
        }

        for (int i = 0; i < n; i++){
            int City; cin >> City;
            for (int j = 0; j < m; j++){
                Flow[City][j] += Q[i][j];
            }
        }

        ll sum = 0;
        for (int i = 0; i < m; i++){
            for (int j = 0; j < m; j++){
                if (i == j) sum += Flow[i][j];
                else{
                    if (Flow[i][j] <= 1000) sum += Flow[i][j] * 3;
                    else sum += 3000 + (Flow[i][j] - 1000) * 2;
                }
            }
        }
        ans = min (ans, sum);
    }

    cout << ans << '\n';
}
