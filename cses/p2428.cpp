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

    ll n, k;
    cin >> n >> k;

    vector<ll> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    int l = 0, r = 0;
    map<ll, int> m;

    ll ans = 0, dis = 0;
    while (l < n){
        while (r < n){
            if (m.find (v[r]) == m.end()){
                if (dis + 1 > k) break;
                else{
                    dis++;
                    m[v[r]] = 1;
                }
            }
            else m[v[r]]++;

            r++;
        }

        ans += r - l;

        if (--m[v[l]] <= 0){
            m.erase(v[l]);
            dis--;
        }
        l++;
    }

    cout << ans << '\n';
}
