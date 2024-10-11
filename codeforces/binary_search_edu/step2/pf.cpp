#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define pii pair<int, int>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

string t, p;
vector<ll> v;

bool check (ll x){
    string s;
    vector<bool> dc(t.size() + 1, 0);

    for (int i = 0; i < x; i++) dc[v[i] - 1] = true;
    for (int i = 0; i < t.size(); i++){
        if (!dc[i]) s += t[i];  
    }

    string tmp;
    ll pos = 0;
    for (int i = 0; i < s.size(); i++){
        if (s[i] == p[pos]){
            pos++;
        }
    }
    
    return pos == p.size();
}

int main(){
	weakson;

    cin >> t >> p;
    v.resize (t.size());
    for (auto &i : v) cin >> i;

    ll ans = 0;
    for (ll j = v.size() / 2; j > 0; j /= 2){
        while (ans + j < t.size() && check (ans + j))
            ans += j;
    }

    cout << ans << '\n';

    return 0;
}
