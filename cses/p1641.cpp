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

    ll n, x;
    cin >> n >> x;

    vector<pll> v(n + 1);
    for (int i = 1; i <= n; i++){
        cin >> v[i].F;
        v[i].S = i;
    }

    sort (v.begin(), v.end());

    int ans[3] = {};
    for (int i = 1; i <= n - 2; i++){
        int l = i + 1, r = n;
        while (l < r){
            ll temp = v[i].F + v[l].F + v[r].F;

            if (temp < x){
                l++;
            }
            else if (temp > x){
                r--;
            }
            else{
                ans[0] = v[i].S;
                ans[1] = v[l].S;
                ans[2] = v[r].S;
                break;
            }
        }
        if (ans[0]) break;
    }

    if (ans[0]) cout << ans[0] << ' ' << ans[1] << ' ' << ans[2] << '\n';
    else cout << "IMPOSSIBLE\n";

    return 0;
}
