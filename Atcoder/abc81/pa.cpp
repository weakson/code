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

	int ans = 0;
	for (int i = 0; i < 3; i++){
		if (s[i] == '1') ans++;
	}

	cout << ans << '\n';
}
