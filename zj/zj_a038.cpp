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

    int ans = 0;
    while (n){
        ans *= 10;
        ans += n % 10;
        n /= 10;
    }
    
    cout << ans << '\n';
}
