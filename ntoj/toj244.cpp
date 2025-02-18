#include<bits/stdc++.h>
#define ll long long
#define weakson ios::sync_with_stdio(0), cin.tie(0);
using namespace std;

int main(){
	weakson;
	
	int n;
	cin >> n;

	string s;
	cin >> s;

	string ans;
	for (int i = 0; i < n; i++){
		if (s[i] & (1 << 5)) ans += s[i] & ~(1 << 5);
		else ans += s[i] | (1 << 5);
	}
	cout << ans << '\n';
	return 0;
}
