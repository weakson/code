#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

vector<bitset<10005> > dp(105);
// bitset<10005> dp[105];

int main(){
	weakson;

	int n, x;
	cin >> n >> x;

	for (int i = 0; i < n; i++){
		int a, b;
		cin >> a >> b;
        if (i == 0){
            dp[0][0] = 0;
            dp[0][a] = true;
            dp[0][b] = true;
            continue;
        }
        for (int j = min(a, b); j <= x; j++){
            if (j - a >= 0) dp[i][j] = dp[i][j] | dp[i - 1][j - a];
            if (j - b >= 0) dp[i][j] = dp[i][j] | dp[i - 1][j - b];
        }
	}

    if (dp[n - 1][x]) cout << "Yes\n";
    else cout << "No\n";

    return 0;
}
