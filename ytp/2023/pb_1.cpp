#include<bits/stdc++.h>
#define ll long long
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define dbug(a) cout << #a << " = " << a << endl;
using namespace std;

int main(){
	weakson;

	int n, w;
	cin >> n >> w;

	ll sum = 0;
	vector <int> arr(n), crr(n), v(n);

	for (int i = 0; i < n; i++){
		int a, b, c;
		cin >> arr[i] >> b >> crr[i];
		sum += b;
	}

	vector<ll> dp(w, sum);

	for (int i = 1; i <= w; i++){
		for (int j = 0; j < n; j++){
			ll val = arr[j] * (i / crr[j] + 1);
			dp[i] = max (dp[i], dp[i - (i / crr[j]) * crr[j]] + val);
		}
	}

	cout << dp[w] << '\n';
}
