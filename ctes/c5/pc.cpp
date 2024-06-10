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

	int q;
	cin >> q;

	while (q--){
		int n;
		cin >> n;

		int l = 0, r = 0;
		while (n != 1){
			if (n & 1){
				r++;
				n = (n - 1) / 2;
			}
			else{
				l++;
				n /= 2;
			}
		}
		cout << l << ' ' << r << '\n';
	}

	return 0;
}
