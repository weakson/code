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

    int q;
    cin >> q;

    while (q--){
        ll n, m, k;
        cin >> n >> m >> k;

        ll p = 0;
        for (ll i = k / 2; i > 0; i /= 2){
            while (p + i <= k && n + k - (p + i) > m + p + i) p += i;
        }

        if (n + k <= m) cout << "0\n";
        else cout << ++p << '\n';
    }
}
