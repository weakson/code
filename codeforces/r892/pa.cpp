#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

int main(){
	weakson;
	
	int t;
	cin >> t;

	while (t--){
		int n;
		cin >> n;

		vector<ll> v(n);
		set<ll> s;
		ll MAX = 0;

		for (int i = 0; i < n; i++){
			cin >> v[i];
			s.insert (v[i]);
			MAX = max (v[i], MAX);
		}

		if (s.size() == 1) cout << "-1\n";
		else{
			vector<ll> b, c;
			for (int i = 0; i < n; i++){
				if (v[i] == MAX) c.emplace_back(v[i]);
				else b.emplace_back(v[i]);
			}
			cout << b.size() << ' ' << c.size() << '\n';
			for (ll i : b) cout << i << ' ';
			cout << '\n';
			for (ll i : c) cout << i << ' ';
			cout << '\n';
		}
	}
	return 0;
}
