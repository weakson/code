#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

int w, h, n;

int main(){
	weakson;

	cin >> w >> h >> n;

	int x_max = w, y_max = h;
	int x_min = 0, y_min = 0;

	for (int i = 0; i < n; i++){
		int x, y, a;
		cin >> x >> y >> a;
		if (a == 1) x_min = max (x_min, x);
		else if (a == 2) x_max = min (x_max, x);
		else if (a == 3) y_min = max (y_min, y);
		else y_max = min (y_max, y);
	}

	int ans = (x_max - x_min) * (y_max - y_min);
    if (x_max - x_min < 0 || y_max - y_min < 0) cout << 0 << '\n';
    else cout << ans << '\n';

	return 0;
}
