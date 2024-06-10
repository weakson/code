#include<bits/stdc++.h>
#define ll long long
#define weakson ios::sync_with_stdio(0), cin.tie(0);
using namespace std;

int main(){
	weakson;
	string a, b;
	while (cin >> a >> b){
		int a_len = a.size();
		int b_len = b.size();
		vector<vector<int> > dp(a_len + 1, vector<int>(b_len + 1, 0));

		for (int i = 1; i <= a_len; i++){
			for (int j = 1; j <= b_len; j++){
				if (a[i - 1] == b[j - 1]){
					dp[i][j] = dp[i - 1][j - 1] + 1;
				}
				else{
					dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
				}
			}
		}

		cout << dp[a_len][b_len] << '\n';
	}
	return 0;
}
