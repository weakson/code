#include<bits/stdc++.h>
#define ll long long
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define EPS 1e-10
using namespace std;

ll is_equal(ll a, ll b, ll c){
	if (c == a + b) return 1LL;
	return 0LL;
}

int main(){
	weakson;
	
	int n;
	cin >> n;

	vector<ll> v;

	for (int i = 0; i < n; i++){
		string s;
		cin >> s;
		ll temp = 0;
		for (int j = 2; j < s.size(); j++){
			temp += s[j] - '0';
			temp *= 10;
		}
		v.emplace_back(temp);
	}
	
	sort (v.begin(), v.end());

	ll ans = 0;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			for (int k = 0; k < n; k++){
				ans += is_equal(v[i], v[j], v[k]);
			}
		}
	}

	cout << ans << '\n';
}
