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

int main(){
    weakson;

    int n;
    cin >> n;

    vector<pii> v(n);
    for (auto &i : v) cin >> i.F >> i.S;

    sort (v.begin(), v.end());

    ll sum = 0, t = 0;
    for (auto i : v){
        t += i.F;
        sum += i.S - t;
    }

    cout << sum << '\n';
}
