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
    
    ll n, k;
    cin >> n >> k;

    vector<ll> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    ll ans = 5e18;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            ans = min (ans, abs(k - v[i] * v[j]));
        }
    }

    cout << ans << '\n';

    return 0;
}
