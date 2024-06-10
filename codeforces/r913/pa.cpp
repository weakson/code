#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

string row = "abcdefgh";
string col = "12345678";

int main(){
	weakson;

	int t;
	cin >> t;

	while (t--){
		string s;
		cin >> s;
		
		int num = s[1] - '0';
		char c = s[0];

		for (int i = 0; i < 8; i++){
			if (i + 1 != num){
				cout << c << col[i] << '\n';
			}
			if (row[i] != c){
				cout << row[i] << num << '\n';
			}
		}
	}

	return 0;
}
