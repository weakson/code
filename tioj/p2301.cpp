#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

vector<pll> v;

ll cal (ll x){
	return (x * (x + 1)) / 2;
}

int main(){
	weakson;

	int n;
	cin >> n;

	v.resize(n);
	ll MAX = 0;

	for (int i = 0; i < n; i++){
		cin >> v[i].F >> v[i].S;
		MAX = max (MAX, v[i].S);
	}

	sort (v.begin(), v.end());

	ll ans = 0, cnt = 0, ptr = 0;
	priority_queue<ll, vector<ll>, greater<ll>> pq;

	for (int i = 0; i <= MAX; i++){
		while (!pq.empty() && i >= pq.top()){
			cnt--;
			pq.pop();
		}
		while (ptr < n && v[ptr].F == i){
			pq.push(v[ptr++].S);
			cnt++;
		}
		if (cnt > 1) ans += cal (cnt - 1);
	}

	cout << ans << '\n';

	return 0;
}
