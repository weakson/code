#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define pii pair<int, int>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

int main(){
	weakson;

    ll n, l, sum = 0;
    cin >> n >> l;

    priority_queue<ull, vector<ull>, greater<ull> > pq;
    for (int i = 0; i < n; i++){
        ll temp; cin >> temp;
        pq.push (temp);
        sum += temp;
    }
    
    if (l - sum) pq.push (l - sum);

    ull ans = 0;
    while (pq.size() > 1){
        ull a = pq.top(); pq.pop();
        ull b = pq.top(); pq.pop();
        ans += a + b;
        pq.push (a + b);
    }
    
    cout << ans << '\n';

    return 0;
}
