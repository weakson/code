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

	int t; cin >> t;

	while (t--){
		string s;
		cin >> s;
		int cur = 1;
		int ans = 0;
		for (int i = 0; i < 4; i++){
			if (s[i] == '0'){
				ans += 10 - cur;
				cur = 10;
			}
			else{
			   	ans += abs((s[i] - '0') - cur);
				cur = s[i] - '0';
			}
			ans++;
		}
		cout << ans << '\n';
	}
	return 0;
}
