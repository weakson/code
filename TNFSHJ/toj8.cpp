#include<bits/stdc++.h>
#define ll long long
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define dbug(a) cout << #a << " = " << a << endl;
using namespace std;

int main(){
	weakson;
	
	int n;

	while (cin >> n){

		cin.ignore();

		string s;
		getline (cin, s);

		string ans[517];

		int cnt = 0;
		for (int i = 0; i < s.size(); i += n, cnt++){
			ans[cnt] = s.substr (i, n);
		}

		for (int i = 0; i < n; i++){
			for (int k = 0; k < cnt; k++){
				cout << ans[k][i];
			}
		}
		cout << '\n';
	}

	return 0;

}
