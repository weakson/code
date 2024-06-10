#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define dbg(x) cout << #x << " = " << x << endl;
#define INF 1e16
using namespace std;

vector<pll> v[1000005], b[1000005];
vector<ll> d;

void dikj_go(int st){
	priority_queue<pll, vector<pll>, greater<pll> > pq;

	pq.emplace(st, 0);
	d[st] = 0;

	while (!pq.empty()){
		ll V = pq.top().F;
		pq.pop();

		for (auto [u, w] : v[V]){
			if (d[V] + w < d[u]){
				d[u] = d[V] + w;
				pq.emplace(u, d[u]);
			}
		}
	}

	return;
}

void dikj_back(int st){
	priority_queue<pll, vector<pll>, greater<pll> > pq;

	pq.emplace(st, 0);
	d[st] = 0;

	while (!pq.empty()){
		ll V = pq.top().F;
		ll sp = pq.top().S;
		pq.pop();

		for (auto [u, w] : b[V]){
			if (d[V] + w < d[u]){
				d[u] = d[V] + w;
				pq.emplace(u, d[u]);
			}
		}
	}

	return;
}

int main(){
	weakson;

	int n, m;
	cin >> n >> m;

	d.resize(n + 5, INF);

	for (int i = 0; i < m; i++){
		int p, q, r;
		cin >> p >> q >> r;

		v[p].emplace_back(q, r);
		b[q].emplace_back(p, r);
	}

	dikj_go(1);
	ll ans = 0;

	for (int i = 2; i <= n; i++){
		if (d[i] == INF){
			cout << 0 << '\n';
			return 0;
		}
		ans += d[i];
	}

	d.resize(0);
	d.resize(n + 5, INF);

	dikj_back(1);

	for (int i = 2; i <= n; i++){
		if (d[i] == INF){
			cout << 0 << '\n';
			return 0;
		}
		ans += d[i];
	}

	cout << ans << '\n';
}
