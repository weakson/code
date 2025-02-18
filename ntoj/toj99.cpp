#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

const double eps = 1e-7;

int main(){
	weakson;

    double a, b, c, d;
    cin >> a >> b >> c >> d;
    double sum = a * d - b * c;

    if (abs(sum) <= eps) cout << 0 << '\n';
    else cout << 1 << '\n';

    return 0;
}
