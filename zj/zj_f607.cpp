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

    int n, l;
    cin >> n >> l;

    vector<int> v(n + 5);
    for (int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        v[y] = x;
    }

    set<int> s;
    ll ans = 0;

    s.insert (0);
    s.insert (l);

    for (int i = 1; i <= n; i++){
        auto it = s.insert(v[i]).F;
        auto prev = *--it;
        it++;
        auto next = *++it;
        ans += next - prev;
    }

    cout << ans << '\n';
}
