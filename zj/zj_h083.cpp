#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define pii pair<int, int>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

unordered_set<string> s;

int main(){
	weakson;

    int m;
    cin >> m;

    for (int i = 0; i < m; i++){
        string it;
        cin >> it;
        s.insert (it);
    }

    ll ans = 0;
    for (auto it : s){
        for (int i = 1; i <= it.size() / 2; i++){
            string l = it.substr (0, i);
            string r = it.substr (it.size() - i);
            if (l == r){
                string mid = it.substr (i, it.size() - i - i);
                if (s.count(mid)) ans++;
            }
        }
    }

    cout << ans << '\n';

    return 0;
}
