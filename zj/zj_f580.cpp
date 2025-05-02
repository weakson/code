#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define pii pair<int, int>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

int ans[25][3];

int main(){
    weakson;

    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++){
        ans[i][0] = 1;
        ans[i][1] = 4;
        ans[i][2] = 2;
    }

    while (m--){
        int a, b;
        cin >> a >> b;
        if (b > 0){
            swap (ans[a], ans[b]);
        }
        else if (b == -1){
            int tmp = ans[a][0];
            ans[a][0] = 7 - ans[a][1];
            ans[a][1] = tmp;
        }
        else{
            int tmp = ans[a][0];
            ans[a][0] = 7 - ans[a][2];
            ans[a][2] = tmp;
        }
    }
    
    for (int i = 1; i <= n; i++) cout << ans[i][0] << ' ';
    cout << '\n';
}
