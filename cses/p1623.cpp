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

    int n;
    cin >> n;

    vector<ll> v(n);

    for (int i = 0; i < n; i++) cin >> v[i];

    ll ans = 1e15;
    for (int i = 0; i < (1LL << n); i++){
        ll a = 0, b = 0;
        for (int j = 0; j < n; j++){
            if ((1LL << j) & i) a += v[j];
            else b += v[j];
        }
        ll temp = abs (a - b);
        ans = min (ans, temp);
    }
    cout << ans << '\n';

    return 0;
}
