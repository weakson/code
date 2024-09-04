#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define pii pair<int, int>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

int main(){
	weakson;

    ll m, v, R;
    cin >> m >> v >> R;

    ll p = m * v * v * 1000000000000;
    p /= R;
    ll q = (p % 100000) / 10000;
    if (q >= 7) p += 100000;
    p /= 100000;

    string s = to_string(p);
    while (s.size() < 8) s = '0' + s;
    s.insert (s.end() - 7, '.');
    cout << s << '\n';

    return 0;
}
