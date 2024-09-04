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

    ll n, p;
    cin >> n >> p;

    vector<ll> v(n);
    ll sum = 0;
    for (ll &i : v){
        cin >> i;
        sum += i;
    }

    ll ans = (p / sum) * n;
    p %= sum;

    ll l = 0, r = 0, dis = 0;
    ll sp, min_dis = 5000;
    sum = 0;
    while (l < n){
        while (sum < p){
            sum += v[r++];
            dis++;
            if (r == n) r = 0;
        }
        if (dis < min_dis){
            sp = l + 1;
            min_dis = dis;
        }
        sum -= v[l++];
        dis--;
    }

    cout << sp << ' ' << ans + min_dis << '\n';

    return 0;
}
