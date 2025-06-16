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

    int n, D;
    cin >> n >> D;

    int a[105];
    for (int i = 1; i <= n; i++) cin >> a[i];

    int x = a[1], ans = 0;
    bool have_stock = true;

    for (int i = 2; i <= n; i++){
        if (have_stock){
            if (a[i] >= x + D){
                ans += a[i] - x;
                x = a[i];
                have_stock = false;
            }
        }
        else{
            if (a[i] <= x - D){
                x = a[i];
                have_stock = true;
            }
        }
    }

    cout << ans << '\n';
}
