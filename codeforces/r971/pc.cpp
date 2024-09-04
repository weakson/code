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

    int t;
    cin >> t;

    while (t--){
        ll x, y, k;
        cin >> x >> y >> k;

        ll a = x / k;
        if (x % k) a++;
        ll b = y / k;
        if (y % k) b++;

        if (a > b) cout << 2 * a - 1 << '\n';
        else cout << 2 * b << '\n';
    }
}
