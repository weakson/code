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

    int n, k;
    cin >> n >> k;
    
    vector<ll> v(n);
    for (auto &i : v) cin >> i;

    priority_queue<ll, vector<ll>, less<ll> > pq;

    ll sum = 0;

    for (int i = n - 1; i >= 0; i--){
        sum += v[i];
        if (i != 0) pq.emplace (sum);
    }

    for (int i = 0; i < k - 1; i++){
        sum += pq.top();
        pq.pop();
    }

    cout << sum << '\n';

    return 0;
}
