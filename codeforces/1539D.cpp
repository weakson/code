#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define pii pair<int, int>
#define swap(a,b) a ^= b ^= a ^= b
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

bool cmp (pll a, pll b){
    return a.S < b.S;
}

int main(){
    weakson;
    
    ll n;
    cin >> n;

    vector<pll> v(n);
    for (auto &i : v) cin >> i.F >> i.S;

    sort (v.begin(), v.end(), cmp);

    ll Money = 0, itm = 0;
    ll l = 0, r = n - 1;
    while (l <= r){
        if (itm >= v[l].S){
            Money += v[l].F;
            itm += v[l].F;
            l++;
        }
        else{
            ll Min = min (v[r].F, v[l].S - itm);
            Money += Min * 2;
            itm += Min;
            v[r].F -= Min;
            if (v[r].F == 0) r--;
        }
    }

    cout << Money << '\n';
}
