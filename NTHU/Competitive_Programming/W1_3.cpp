#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define pii pair<int, int>
#define swap(a,b) a ^= b ^= a ^= b
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

int n;
string s;
vector<char> v;
vector<vector<char> > ans;
bitset<10> vis;

void dfs (int id){
    if (id == n){
        ans.emplace_back (v);
        return;
    }
    char prev = '\0';
    for (int i = 0; i < n; i++){
        if (vis[i] || prev == s[i]) continue;
        vis[i] = true;
        v.emplace_back (s[i]);
        dfs (id + 1);
        v.pop_back();
        vis[i] = false;
        prev = s[i];
    }
}

int main(){
    weakson;

    cin >> s;
    sort (s.begin(), s.end());

    n = s.size();

    vis.reset();
    dfs (0);

    cout << ans.size() << '\n';
    for (auto a : ans){
        for (auto i : a){
            cout << i;
        }
        cout << '\n';
    }
}
