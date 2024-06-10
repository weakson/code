#include<bits/stdc++.h>
#define ll long long
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define dbug(a) cout << #a << " = " << a << endl;
using namespace std;

int main(){
	weakson;

	int t;
	cin >> t;

	string s;
	cin >> s;

	int len = s.size();

	for (int i = 0; i < len; i++){
		if (s[i] - t < 'A'){
			s[i] = 26 + (s[i] - t);
		}
		else s[i] -= t;
	}

	cout << s << '\n';

	return 0;
}
