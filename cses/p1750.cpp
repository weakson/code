#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define dbug(a) cout << #a << " = " << a << endl;
using namespace std;

// DO NOT USE VECTOR
// VECTOR IS TOOOO FAT

int dp[200005][35];
int v[200005];

int main(){
	weakson;

	int n, q;
	cin >> n >> q;

	for (int i = 1; i <= n; i++) cin >> v[i];
	
	// for (int i = 0; i <= n; i++) dp[i].resize(35);
	// dp[i][j] -> jump 2^j steps from i-th planet 

	for (int i = 1; i <= n; i++) dp[i][0] = v[i];

	for (int j = 1; j <= 31; j++){
		for (int i = 1; i <= n; i++){
			dp[i][j] = dp[dp[i][j - 1]][j - 1];
		}
	}

	while (q--){
		int x, k;
		cin >> x >> k;

		for (int i = 0; i <= 31; i++){
			if (k & (1LL << i)) x = dp[x][i];
		}
		cout << x << '\n';
	}
}
