#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define pii pair<int, int>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

ll k, n;
vector<ll> v;

bool check (ll x){
    ll sum = 0;

    for (int i = 0; i < n; i++){
        sum += min(v[i], x);
    }

    if (sum >= x * k) return true;
    return false;
}

int main(){
	weakson;

    cin >> k >> n;

    v.resize (n);
    ll tot = 0;
    for (int i = 0; i < n; i++){
        cin >> v[i];
        tot += v[i];
    }
    tot /= k;

    ll p = 0;
    for (ll j = tot / 2; j > 0; j /= 2){
        while (p + j <= tot && check (p + j)) p += j;
    }

    cout << p << '\n';
}
