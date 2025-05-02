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

const ll M = 998244353;

int main(){
    weakson;

    int n; cin >> n;
    int a[3005], b[3005];
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) cin >> b[i];

    ll dp[3005] = {};
  
    dp[0] = 1;
    for (int i = a[1]; i <= b[n]; i++){
        for (int j = 1; j <= n; j++){
            if (i >= a[j] && i <= b[j]){
                dp[j] = (dp[j] + dp[j - 1]) % M;
            }
        }
    }
    cout << dp[n] << '\n';
}

