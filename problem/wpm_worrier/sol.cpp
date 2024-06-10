#include<bits/stdc++.h>
#define ll long long
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define dbug(a) cout << #a << " = " << a << endl;
using namespace std;

int main(){
	weakson;

	string s;
	getline (cin, s);

	ll sum = 0;
	for (int i = 0; i < s.size(); i++){
		if (s[i] >= '0' && s[i] <= '9'){
			sum += s[i] - '0';
		}
	}
	cout << sum << '\n';

	return 0;
}
