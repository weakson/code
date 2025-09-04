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

    ll sum = 0, Max = -1;

    for (int i = 0; i < n; i++){
        ll t; cin >> t;
        sum += t;
        Max = max (Max, t);
    }

    cout << max (Max * 2, sum) << '\n';
}
