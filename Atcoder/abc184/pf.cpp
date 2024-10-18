#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define pii pair<int, int>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

ll n, t;

int main(){
	weakson;

    cin >> n >> t;
    int mid = n / 2;
    
    vector<ll> a, b;
    for (int i = 0; i < n; i++){
        ll tmp; cin >> tmp;
        if (i <= mid) a.emplace_back (tmp);
        else b.emplace_back (tmp);
    }

    vector<ll> q;
    ll len = a.size();
    for (int i = 0; i < (1LL << len); i++){
        ll sum = 0;
        for (int j = 0; j < len; j++){
            if (i & (1LL << j)) sum += a[j];
        }
        if (sum <= t) q.emplace_back (sum);
    }

    sort (q.begin(), q.end());

    len = b.size();
    ll ans = -1;
    for (int i = 0; i < (1LL << len); i++){
        ll sum = 0;
        for (int j = 0; j < len; j++){
            if (i & (1LL << j)) sum += b[j];
        }
        ll tmp = upper_bound (q.begin(), q.end(), t - sum) - q.begin();
        if (!tmp) continue;
        ans = max (q[--tmp] + sum, ans);
    }

    cout << ans << '\n';

    return 0;
}
