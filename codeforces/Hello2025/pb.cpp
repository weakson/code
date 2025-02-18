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

  int t;
  cin >> t;

  while (t--){
    ll n, k;
    cin >> n >> k;

    vector<ll> v(n);
    map<ll, ll> m;
    for (auto &i : v){
      cin >> i;
      m[i]++;
    }
    priority_queue<pll, vector<pll>, greater<pll> > pq;
    for (auto i : m){
      pq.emplace (i.S, i.F);
    }

    while (pq.size() != 1 && k != 0){
      ll cnt = pq.top().F;
      ll num = pq.top().S;
      pq.pop();
      if (cnt > k){
        k = 0;
        pq.emplace (cnt - k, num);
      }
      else{
        k -= cnt;
      }
    }
    cout << pq.size() << '\n';
  }
}
