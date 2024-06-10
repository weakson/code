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

    int x, n;
    cin >> x >> n;

    priority_queue<ll, vector<ll>, greater<ll> > pq;
    for (int i = 0; i < n; i++){
        int temp; cin >> temp;
        pq.push (temp);
    }

    ll ans = 0;
    while (pq.size() != 1){
        ll a = pq.top(); pq.pop();
        ll b = pq.top(); pq.pop();
        ans += a + b;
        pq.push (a + b);
    }

    cout << ans << '\n';

    return 0;
}
