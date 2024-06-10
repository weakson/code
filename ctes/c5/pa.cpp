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

	string s;
	cin >> s;
	int len = s.size();
	string up, lw, num;

	for (int i = 0; i < len; i++){
		if (s[i] >= 'a' && s[i] <= 'z') lw += s[i];
		else if (s[i] >= '1' && s[i] <= '9') num += s[i];
		else if (s[i] >= 'A' && s[i] <= 'Z') up += s[i];
	}

	int op; cin >> op;
	if (op == 1) cout << lw << '\n';
	else if (op == 2) cout << up << '\n';
	else cout << num << '\n';

	return 0;
}
