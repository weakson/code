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
        ll n, k;
        cin >> n >> k;

        ll tot = (2 * k + (n - 1)) * n / 2;

        ll l = 1, r = n;
        while (l < r){
            ll mid = (l + r) / 2;
            ll temp = (2 * k + (mid - 1)) * mid;
            /*
            dbg (l);
            dbg (r);
            dbg (mid);
            dbg (temp);
            cout << endl;
            */
            if (temp < tot) l = mid + 1;
            else r = mid;
        }

        ll a = abs((2 * k + (l - 1)) * l - tot);
        ll b = 8e18;
        if (l > 1)  b = abs((2 * k + (l - 2)) * (l - 1) - tot);

        cout << min (a, b) << '\n';
    }

    return 0;
}
