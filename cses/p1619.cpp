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

    vector<pll> v;

    for (int i = 0; i < n; i++){
        ll a, b;
        cin >> a >> b;
        v.emplace_back(a, b);
    }

    sort (v.begin(), v.end());

    priority_queue<ll, vector<ll>, greater<ll> > pq;

    ll Time = 0, ans = -1;

    for (int i = 0; i < n; i++){
        Time = v[i].F;
        pq.push (v[i].S);
        while (!pq.empty() && pq.top() < Time) pq.pop();
        ans = max (ans, (ll)pq.size());
    }

    cout << ans << '\n';
}
