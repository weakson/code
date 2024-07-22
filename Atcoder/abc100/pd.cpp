#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define pii pair<int, int>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

bool cmp (ll a, ll b){
    return a > b;
}

int main(){
	weakson;

    int n, m;
    cin >> n >> m;

    vector<ll> v[3];
    for (int i = 0; i < 3; i++) v[i].resize(n);

    for (int i = 0; i < n; i++){
        for (int j = 0; j < 3; j++){
            cin >> v[j][i];
        }
    }

    ll MAX = -1e15;
    for (int i = 0; i < 8; i++){
        vector<ll> tmp;
        for (int j = 0; j < n; j++){
            ll sum = 0;
            for (int k = 0; k < 3; k++){
                if ((1 << k) & i) sum += v[k][j];
                else sum -= v[k][j];
            }
            tmp.emplace_back(sum);
        }
        sort (tmp.begin(), tmp.end(), cmp);
        ll ans = 0;
        for (int j = 0; j < m; j++){
            ans += tmp[j];
        }
        MAX = max (MAX, ans);
    }
    
    cout << MAX << '\n';

    return 0;
}
