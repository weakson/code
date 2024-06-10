#include<bits/stdc++.h>
#define ll long long
#define weakson ios::sync_with_stdio(0), cin.tie(0);
using namespace std;

int main(){
	weakson;

	int n;
	cin >> n;
	
	vector<int> v(n);

	for (int i = 0; i < n; i++) cin >> v[i];

	vector<int> dp;

	for (int i = 0; i < n; i++){
		auto p = lower_bound (dp.begin(), dp.end(), v[i]);
		if (p == dp.end()) dp.push_back (v[i]); // not found
		else dp[p - dp.begin()] = v[i];
		
		cout << "dp : ";
		for (int i : dp) cout << i << ' ';
		cout << '\n';
	}

	cout << dp.size() << '\n';
}

/*
10
3 8 3 8 1 5 10 5 8 10
*/
