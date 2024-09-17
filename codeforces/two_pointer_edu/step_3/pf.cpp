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

    int n, m;
    cin >> n >> m;

    string s, t;
    cin >> s >> t;

    map <char, int> mp;
    for (auto i : t){
        mp[i]++;
    }

    int l = 0, r = 0;
    map <char, int> tmp;
    ll ans = 0;

    while (l < n && r < n){
        while (r < n){
            tmp[s[r]]++;
            if (tmp[s[r]] > mp[s[r]]) break;
            r++;
            ans += r - l;
        }

        if (r == n){
            break;
        }
        else{
            while (tmp[s[r]] > mp[s[r]]){
                tmp[s[l++]]--;
            }
            r++;
            ans += r - l;
        }
    }
    
    cout << ans << '\n';
}
