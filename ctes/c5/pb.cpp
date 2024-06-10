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

	int n; cin >> n;
	string s[505];

	for (int i = 0; i < n; i++){
		cin >> s[i];
	}

	int k; cin >> k;
	string op; cin >> op;

	int x, y;
	string ans;
	for (int i = 0; i < k; i++){
		if (op[i] == '0'){
			x = 0; y = n - i - 1;
			while (x < n){
				ans += s[x++][y++];
			}
		}
		else{
			x = i, y = n - 1;
			while (x >= 0){
				ans += s[x--][y--];
			}
		}
	}
	cout << ans << '\n';
}
