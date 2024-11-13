#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define pii pair<int, int>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

vector<ll> dp;
const ll mod = 1e9 + 7;

int main(){
	weakson;

    int n;
    cin >> n;

    dp.resize (n + 1);
    dp[0] = 1;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= min (i, 6); j++){
            dp[i] += dp[i - j];
            dp[i] %= mod;
        }
    }
    
    cout << dp[n] << '\n';
}
