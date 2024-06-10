#include<bits/stdc++.h>
#define ll long long
#define weakson ios::sync_with_stdio(0), cin.tie(0);
using namespace std;

int main(){
	weakson;

	int w, h;
	while (cin >> w >> h){
		if (w == 0 and h == 0) break;

		vector<vector<bool> > wolf (w + 1, vector<bool> (h + 1));

		int n;
		cin >> n;

		while (n--){
			int x, y;
			cin >> x >> y;
			wolf[x][y] = true;
		}

		vector<vector<ll> > dp (w + 1, vector<ll> (h + 1));
		dp[0][0] = 1;

		// for (auto v : dp){
		// 	for (auto it : v) cout << it << ' ';
		// 	cout << '\n';
		// }

		for (int i = 0; i <= w; i++){
			for (int j = 0; j <= h; j++){

				if ((i == 0 and j == 0) or wolf[i][j]) continue;

				if (i == 0){
					dp[i][j] = dp[i][j - 1];
				}
				else if (j == 0){
					dp[i][j] = dp[i - 1][j];
				}
				else{
					dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
				}
			}
		}

		// for (int i = h; i >= 0; i--){
		// 	for (int j = 0; j <= w; j++){
		// 		cout << dp[j][i] << ' ';
		// 	}
		// 	cout << '\n';
		// }

		ll ans = dp[w][h];

		if (ans == 1){
			cout << "There is one path from Little Red Riding Hood's house to her grandmother's house.\n";
		}
		else if (ans == 0){
			cout << "There is no path.\n";
		}
		else{
			cout << "There are " << ans << " paths from Little Red Riding Hood's house to her grandmother's house.\n";
		}
	}
	return 0;
}
