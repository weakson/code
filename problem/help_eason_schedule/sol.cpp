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

    int n; cin >> n;

    vector<ll> v(n + 1), pre(n + 1, 0);
    for (int i = 1; i <= n; i++){
        cin >> v[i];
        pre[i] = pre[i - 1] + v[i];
    }

    ll x; cin >> x;
    ll Min = 1e18;
    int ans_l, ans_r;

    for (int r = 1; r <= n; r++){
        int l = 1;
        for (int j = r / 2; j > 0; j /= 2){
            while (l + j <= r && pre[r] - pre[l + j - 1] >= x){
                l += j;
            }
        }
        ll Left = abs (pre[r] - pre[l - 1] - x); // smallest sum >= x
        ll Right = abs (pre[r] - pre[l] - x); // biggest sum < x
        if (Left <= Right){
            if (Left <= Min){
                ans_l = l;
                ans_r = r;
                Min = Left;
            }
        }
        else{
            if (Right <= Min){
                ans_l = l + 1;
                ans_r = r;
                Min = Right;
            }
        }
    }

    cout << ans_l << ' ' << ans_r << '\n';

}
