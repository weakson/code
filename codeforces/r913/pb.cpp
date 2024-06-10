#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;


int main(){
	weakson;

	int t;
	cin >> t;
	
	while (t--){
		string s;
		cin >> s;

		vector<pair<char, int> > up, lo;

		int len = s.size();
		for (int i = 0; i < len; i++){
			if (s[i] == 'B' && !up.empty()){
				up.pop_back();
			}
			else if (s[i] == 'b' && !lo.empty()){
				lo.pop_back();
			}
			else if (s[i] != 'b' && s[i] != 'B'){
				if (s[i] >= 'A' && s[i] <= 'Z'){
					up.emplace_back (make_pair(s[i], i));
				}
				else{
					lo.emplace_back (make_pair(s[i], i));
				}
			}
		}

		int upt = 0, lpt = 0;
		int ulen = up.size(), llen = lo.size();
		while (upt < ulen && lpt < llen){
			if (up[upt].S < lo[lpt].S){
				cout << up[upt++].F;
			}
			else cout << lo[lpt++].F;
		}

		while (upt < ulen) cout << up[upt++].F;
		while (lpt < llen) cout << lo[lpt++].F;

		cout << '\n';
	}

	return 0;
}
