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

    int n, k;
    cin >> n >> k;

    vector<ll> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    multiset<ll> r;
    multiset<ll, greater<ll> > l;
    ll l_sum = 0, r_sum = 0;
    for (int i = 0; i < n; i++){
        if (v[i] <= *l.begin() || l.empty()) l.insert (v[i]), l_sum += v[i];
        else r.insert (v[i]), r_sum += v[i];
        while (l.size() >= r.size()){
            ll temp = *l.begin();
            l.erase (l.begin());
            l_sum -= temp;
            r_sum += temp;
            r.insert (temp);
        }
        while (l.size() < r.size()){
            ll temp = *r.begin();
            r.erase (r.begin());
            r_sum -= temp;
            l_sum += temp;
            l.insert (temp);
        }
        if (i >= k - 1){
            ll mid = (k & 1) ? *l.begin() : (*l.begin() + *r.begin()) / 2;
            ll ans = (k & 1) ? r_sum - l_sum + mid : r_sum - l_sum;
            ll temp = v[i - k + 1];
            if (l.find(temp) != l.end()){
                l.erase (l.find(temp));
                l_sum -= temp;
            }
            else{
                r.erase (r.find(temp));
                r_sum -= temp;
            }
            cout << ans << " \n"[i == n - 1];
        }
    }
    return 0;
}
