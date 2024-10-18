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

    ll n, x;
    cin >> n >> x;
    ll mid = n >> 1;

    vector<ll> a, b;
    for (int i = 0; i < n; i++){
        ll tmp; cin >> tmp;
        if (i < mid) a.emplace_back (tmp);
        else b.emplace_back (tmp);
    }

    vector<ll> q;
    ll len = a.size();
    for (int i = 0; i < (1 << len); i++){
        ll sum = 0;
        for (int j = 0; j < len; j++){
            if (i & (1 << j)) sum += a[j];
        }
        q.emplace_back (sum);
    }

    sort (q.begin(), q.end());

    len = b.size();
    ll ans = 0;
    for (int i = 0; i < (1 << len); i++){
        ll sum = 0;
        for (int j = 0; j < len; j++){
            if (i & (1 << j)) sum += b[j];
        }
        int r = upper_bound (q.begin(), q.end(), x - sum) - q.begin();
        int l = lower_bound (q.begin(), q.end(), x - sum) - q.begin();
        if (l != r) ans += r - l;
    }
    
    cout << ans << '\n';

    return 0;
}
