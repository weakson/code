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

    int n, q;
    cin >> n >> q;

    vector<int> v(n);
    for (int &i : v) cin >> i;

    priority_queue<pii> Max;
    priority_queue<pii, vector<pii>, greater<pii> > Min;

    while (q--){
        int k; cin >> k;
        ll sum = 0, ans = 1e18;

        while (!Max.empty()) Max.pop();
        while (!Min.empty()) Min.pop();

        for (int i = 0; i < n; i++){
            sum += v[i];
            Max.emplace (v[i], i);
            Min.emplace (v[i], i);
            while (!Max.empty() && Max.top().S <= i - k) Max.pop();
            while (!Min.empty() && Min.top().S <= i - k) Min.pop();
            if (i >= k - 1){
                ans = min (ans, (sum - Max.top().F - Min.top().F) / (k - 2));
                sum -= v[i - k + 1];
            }
        }
        cout << ans << '\n';
    }

}
