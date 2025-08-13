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

    ll a = 2, b = 0;
    ll i = 0, j = 3;

    for (int k = 0; k < n; k++){
        cout << a * b << '\n';
        a += i;
        b += j;
        i += 2;
        j++;
    }
}
