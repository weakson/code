#include<bits/stdc++.h>
#define ll long long
#define weakson ios::sync_with_stdio(0), cin.tie(0);
using namespace std;

int main(){
	weakson;

	int t;
	cin >> t;

	while (t--){
		vector<string> v(1);

		string s;
		cin >> s;

		int len = s.size();
		v[0] = s[0];

		int p = 0;

		for (int i = 1; i < len; i++){
			int j = v[p].size() - 1;
			if (s[i] == v[p][0]){
				v.emplace_back("\0");
				p++;
				v[p] += s[i];
				j = 0;
			}
			else v[p] += s[i];
			while (p > 0 and (v[p].size() > v[p - 1].size() or v[p][j] != v[p - 1][j]) ){
				p--;
				v[p] += v[p + 1];
				v.pop_back();
			}

			// for (string s : v){
			// 	cout << s << '\n';
			// }
			// cout << '\n';

		}
		if (v[0].size() > v[1].size() and v.size() > 2){
			cout << s << '\n';
		}
		else cout << v[0] << '\n';
	}
}
