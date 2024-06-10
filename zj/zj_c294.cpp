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

	int a[3];
	cin >> a[0] >> a[1] >> a[2];

	sort (a, a + 3);

	cout << a[0] << ' ' << a[1] << ' ' << a[2] << '\n';

	if (a[0] + a[1] < a[2]){
		cout << "No\n";
		return 0;
	}

	ll x = a[0] * a[0], y = a[1] * a[1], z = a[2] * a[2];

	if (x + y == z) cout << "Right\n";
	else if (x + y > z) cout << "Acute\n";
	else cout << "Obtuse\n";

	return 0;
}
