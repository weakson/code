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
    
    ll m, v, r;
    cin >> m >> v >> r;

    ll M = 1e12;

    ll ans = m * v * v * M;
    ans /= r;
    
    ans /= 10000;
    if (ans % 10 >= 7) ans += 10;
    ans /= 10;

    string s = to_string (ans);
    while (s.size() <= 7) s = '0' + s;
    
    for (int i = 0; i < s.size(); i++){
        cout << s[i];
        if (i == s.size() - 8) cout << '.';
    }
    cout << '\n';

    return 0;
}
