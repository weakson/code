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

    int n;
    cin >> n;

    vector<ll> a(n + 1), b(n + 1), pre(n + 1), suf(n + 2);
    
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) cin >> b[i];

    for (int i = 1; i <= n; i++) pre[i] = pre[i - 1] + a[i] * b[i];
    for (int i = n; i >= 1; i--) suf[i] = suf[i + 1] + a[i] * b[i];

    ll ans = pre[n];
    for (int i = 1; i <= n; i++){
        int l = i - 1, r = i + 1;
        ll sum = a[i] * b[i];
        while (l >= 1 && r <= n){
            sum += a[l] * b[r];
            sum += a[r] * b[l];
            ans = max (ans, sum + pre[l - 1] + suf[r + 1]);
            l--;
            r++;
        }
    }
    for (int i = 1; i < n; i++){
        int l = i, r = i + 1;
        ll sum = 0;
        while (l >= 1 && r <= n){
            sum += a[l] * b[r];
            sum += a[r] * b[l];
            ans = max (ans, sum + pre[l - 1] + suf[r + 1]);
            l--;
            r++;
        }
    }

    cout << ans << '\n';
}
