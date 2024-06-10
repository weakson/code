#include<bits/stdc++.h>
#define ll long long
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define dbug(a) cout << #a << " = " << a << endl;
using namespace std;

int main(){
	weakson;

	int t;
	cin >> t;

	while (t--){
		int n;
		cin >> n;

		vector<pair<ll, bool> > v;
		bitset<200005> b;

		for (int i = 0; i < n; i++){
			ll tmp;
			cin >> tmp;
			if (tmp & 1) v.emplace_back(make_pair(tmp, 1)), b[i] = 1;
			else v.emplace_back(make_pair(tmp, 0)), b[i] = 0;
		}
		sort (v.begin(), v.end());

		bool is_sort = true;
		for (int i = 0; i < n; i++){
			if (v[i].second != b[i]) is_sort = false;
		}
		if (is_sort) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
