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

    ll xa, xb, ya, yb, k;
    cin >> xa >> ya >> xb >> yb >> k;
    ll xe = (xa + xb) / 2;
    
    ll i;
    bool is_found = false;
    for (i = xa; i <= xe; i++){
        ll tx = abs (abs (i - xa) - abs (i - xb));
        ll ty = k - tx;
        if (ty >= 0 && ty <= ya - yb){
            if (ty % 2 == (ya - yb) % 2) is_found = true;
            break;
        }
    }

    if (is_found){
        ll ty = k - abs (abs (i - xa) - abs (i - xb));
        ll j;
        ll ye = (ya + yb) / 2;
        for (j = yb; j <= ye; j++){
            if (abs (abs (j - ya) - abs (j - yb)) == ty) break;
        }
        cout << i << ' ' << j << '\n';
    }
    else{
        const ll M = 1e9 + 1;
        cout << M << ' ' << M << '\n';
    }

    return 0;
}
