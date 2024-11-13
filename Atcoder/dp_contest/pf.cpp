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

    string s, t;
    cin >> s >> t;

    int n = s.size(), m = t.size();

    vector<vector<ll> > dp (n + 1);
    for (int i = 0; i <= n; i++) dp[i].resize (m + 1);

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            if (s[i - 1] == t[j - 1]) dp[i][j] = dp[i - 1][j - 1] + 1;
            else dp[i][j] = max (dp[i - 1][j], dp[i][j - 1]);
        }
    }

    int i = n, j = m;
    stack<char> ans;
    while (i && j){
        if (dp[i][j] == dp[i - 1][j]) i--;
        else if (dp[i][j] == dp[i][j - 1]) j--;
        else{
            ans.push (s[i - 1]);
            i--, j--;
        }
    }

    while (!ans.empty()){
        cout << ans.top();
        ans.pop();
    }

    cout << '\n';

    return 0;
}
