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

const ll M = 1e9 + 7;

ll pow (ll n){
    if (n == 1) return 2;

    ll ans = pow(n / 2) % M;

    if (n & 1) return (2 * (ans * ans) % M) % M;
    else return (ans * ans) % M;
}

int main(){
    weakson;
    
    ll n;
    cin >> n;

    cout << pow(n) % M << '\n';

}
