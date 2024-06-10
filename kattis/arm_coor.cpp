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

	int x, y, r;
	cin >> x >> y >> r;
	cout << x + r << ' ' << y + r << '\n';
	cout << x + r << ' ' << y - r << '\n';
	cout << x - r << ' ' << y - r << '\n';
	cout << x - r << ' ' << y + r << '\n';
	
	return 0;
}
