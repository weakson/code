#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define pii pair<int, int>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

bitset<10000001> prime;
vector<ll> v, pre;

int main(){
	weakson;

    int t;
    cin >> t;

    const ll M = 10000000;
    for (int i = 2; i <= M; i++){
        for (int j = i + i; j <= M; j += i){
            prime[j] = 1;
        }
    }

    v.emplace_back (-1);
    for (int i = 2; i <= M; i++){
        if (!prime[i]) v.emplace_back (i);
    }

    pre.resize (v.size());
    pre[0] = 0;
    pre[1] = 1;

    for (int i = 2; i < v.size(); i++){
        ll tmp = v[i] - 2;
        if (!prime[tmp]){
            ll x = lower_bound (v.begin(), v.end(), tmp) - v.begin();
            pre[x] = 1;
        }
    }

    for (int i = 1; i < pre.size(); i++){
        pre[i] += pre[i - 1];
    }

    for (int ti = 1; ti <= t; ti++){
        cout << "Case #" << ti << ": ";

        ll n;
        cin >> n;

        if (n <= 4){
            cout << "0\n";
            continue;
        }

        ll ans = upper_bound (v.begin(), v.end(), n - 2) - v.begin() - 1;

        cout << pre[ans] << '\n';
    }
    
    return 0;
}
