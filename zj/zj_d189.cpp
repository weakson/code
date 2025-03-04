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
    //weakson;

    int n;
    while (cin >> n){
        ll ans = 0, bot = 0, cola = n;
        while (cola){
            ans += cola;
            bot += cola;
            cola = bot / 3;
            bot = bot % 3;
        }

        if (bot == 2) ans++;

        cout << ans << '\n';
    }
}
