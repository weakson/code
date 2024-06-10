#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define dbg(x) cout << #x << " = " << x << endl;
#define MAX 1e10
using namespace std;

int main(){
	weakson;

	vector<ll> v(15), dp;
	for (int i = 0; i < 10; i++){
		cin >> v[i];
	}
	int tar; cin >> tar;

	dp.resize(tar + 10, MAX);
	dp[0] = 0;
	for (int i = 0; i <= tar; i++){
		for (int j = 0; j < 10; j++){
			if (i - v[j] >= 0){
				dp[i] = min (dp[i], dp[i - v[j]] + 1);
			}
		}
	}
	
	if (dp[tar] == MAX) cout << "No Solution\n";
	else cout << dp[tar] << '\n';
}
