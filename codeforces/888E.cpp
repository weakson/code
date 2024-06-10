#include<bits/stdc++.h>
#define ll long long
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define dbug(a) cout << #a << " = " << a << endl;
using namespace std;

set<ll> s;

int main(){
	weakson;
	
	ll n, m;
	cin >> n >> m;

	vector<ll> a, b;

	for (int i = 0; i < n; i++){
		ll temp;
		cin >> temp;

		if (i < n / 2) a.emplace_back(temp);
		else b.emplace_back(temp);
	}

	int len = a.size();
	ll MAX = 0;
	for (int i = 0; i < (1 << len); i++){ // half of array
		ll sum = 0;
		for (int j = 0; j < len; j++){
			if (i & (1 << j)) sum = (sum % m + a[j] % m) % m;
		}
		MAX = max (MAX, sum);
		s.insert (sum);
	}

	len = b.size();
	for (int i = 0; i < (1 << len); i++){ // the other half
		ll sum = 0;
		for (int j = 0; j < len; j++){
			if (i & (1 << j)) sum = (sum % m + b[j] % m) % m;
		}
		MAX = max (MAX, sum);
		// find the first element which > m - sum - 1
		auto it = s.upper_bound (m - sum - 1); 

		if (it != s.begin()) it--;

		if (*it > m - sum - 1) continue;

		MAX = max (*it + sum, MAX);
	}

	cout << MAX << '\n';
	
	return 0;
}

// 4 9
// 5 2 4 1
