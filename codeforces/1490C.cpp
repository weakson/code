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

    int t;
    cin >> t;

    while (t--){
        ll x;
        cin >> x;

        bool is_find = false;
        for (ll i = 1; i * i * i <= x; i++){
            ll a = i * i * i;
            ll b = x - a;
            ll temp = cbrt (b);
            if (temp * temp * temp == b && b != 0){
                is_find = true;
                break;
            }
        }
        if (is_find) cout << "YES\n";
        else cout << "NO\n";
    }
}
