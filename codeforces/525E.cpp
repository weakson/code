#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define pii pair<int, int>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

const ll M = 1e16;
vector<ll> st(51), v;
ll n, k, S, mid, ans;
vector<map<ll, ll> > q(50);

void f_dfs (int i, int cnt, ll sum){
    if (i == mid){
        q[cnt][sum]++;
        return;
    }

    f_dfs (i + 1, cnt, sum + v[i]);
    f_dfs (i + 1, cnt, sum);

    if (cnt < k && v[i] <= 18) f_dfs (i + 1, cnt + 1, sum + st[v[i]]);

    return;
}

void s_dfs (int i, int cnt, ll sum){
    if (i == n){
        for (int j = 0; j <= k - cnt; j++){
            if (q[j].find (S - sum) == q[j].end())
                continue;
            ans += q[j][S - sum];
        }
        return;
    }

    s_dfs (i + 1, cnt, sum + v[i]);
    s_dfs (i + 1, cnt, sum);

    if (cnt < k && v[i] <= 18) s_dfs (i + 1, cnt + 1, sum + st[v[i]]);

    return;
}

int main(){
	weakson;

    cin >> n >> k >> S;

    mid = n >> 1;

    ll tmp = 1;
    st[0] = 1;
    for (ll i = 1; i <= 50; i++){
        tmp *= i;
        if (tmp > M) break;
        st[i] = tmp;
    }

    v.resize (n);
    for (int i = 0; i < n; i++) cin >> v[i];

    f_dfs (0, 0, 0);
    s_dfs (mid, 0, 0);

    cout << ans << '\n';
}
