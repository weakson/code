#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

vector<ll> tab;

int main(){
	weakson;

	int t;
	cin >> t;

	tab.emplace_back(1);
	for (int i = 1; i <= 63; i++){
		tab.emplace_back(1LL << i);
	}

	while (t--){
		int n;
		cin >> n;

		vector<ll> v(n);
		ll ans = 0;
		for (int i = 0; i < n; i++){
			cin >> v[i];
		}

		for (int i = 1; i < n; i++){
			int temp = v[i - 1] / v[i];
			if (temp != 0 && v[i - 1] % v[i] != 0) temp++;
			auto it = lower_bound (tab.begin(), tab.end(), temp);
			if (*it != 0) v[i] *= *it;
			ans += it - tab.begin();
		}
		
		cout << ans << '\n';
	}
}
