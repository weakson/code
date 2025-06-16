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

int main(){
    weakson;

    int n;
    cin >> n;

    vector<vector<int> > v(n);

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            int x; cin >> x;
            if (x) v[i].emplace_back (j);
        }
    }

    ll a, b, k;
    cin >> a >> b >> k;

    bitset<10005> vis;
    queue<pll> q;

    q.emplace (a, 0);
    vis[a] = true;

    if (a == b){
        cout << 0 << '\n' << "You did it ! You did it !\n";
        return 0;
    }

    bool is_found = false;

    while (!q.empty()){
        ll u = q.front().F;
        ll dis = q.front().S;
        q.pop();

        for (auto i : v[u]){
            if (i == b){
                if (dis + 1 <= k){
                    cout << dis + 1 << '\n' << "You did it ! You did it !\n";
                    is_found = true;
                }
            }
            if (!vis[i]){
                q.emplace (i, dis + 1);
                vis[i] = true;
            }
        }

        if (is_found) break;
    }

    if (!is_found) cout << "You failed the mission and pooped on pants !\n";
}
