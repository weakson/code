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

    int a, b, c;
    cin >> a >> b >> c;

    if (a > c) swap (a, c);
    if (b > c) swap (b, c);
    if (a > b) swap (a, b);

    cout << a << ' ' << b << ' ' << c << '\n';

    if (a + b <= c) cout << "No\n";
    else if (a * a + b * b < c * c) cout << "Obtuse\n";
    else if (a * a + b * b == c * c) cout << "Right\n";
    else cout << "Acute\n";

	return 0;
}
