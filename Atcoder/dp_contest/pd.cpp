#include<iostream>
#include<vector>
#include<algorithm>
#define fastio ios::sync_with_stdio(0), cin.tie(0)
#define ll long long
using namespace std;

int main(){
	fastio;
	int n, w;
	cin >> n >> w;
	vector<ll> dp(w + 1, 0);
	int weight, value;
	for(int i = 0; i < n; i++){
		cin >> weight >> value;
		for(int j = w; j >= weight; j--){
			dp[j] = max(dp[j], dp[j - weight] + value);
		}
	}
	cout << dp[w] << '\n';
	return 0;
}
