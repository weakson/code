#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define dbg(x) cout << #x << " = " << x << endl;
#define INF 1e10
using namespace std;

int n, m, st, ed;
ll d[1005];

ll dikj(int st, int ed, vector<pair<ll, ll> > v[]){
	priority_queue<pair<ll, ll> , vector<pair<ll, ll> >, greater<pair<ll, ll> > > pq;

	for (int i = 1; i <= n; i++){
		d[i] = INF;
	}

	pq.push (make_pair(st, 0));
	d[st] = 0;

	while (!pq.empty()){
		ll V = pq.top().F;
		ll sp = pq.top().S;
		pq.pop();

		// if (d[V] != sp) continue;

		for (auto [u, w] : v[V]){
			if (d[V] + w < d[u]){
				d[u] = d[V] + w;
				pq.push (make_pair(u, d[u]));
			}
		}
	}

	return d[ed];
}

int main(){
	weakson;

	while (cin >> n >> m){
		cin >> st >> ed;
		vector<pair<ll, ll> > v[1005];

		for (int i = 0; i < m; i++){
			int a, b, c;
			cin >> a >> b >> c;

			v[a].emplace_back(b, c);
			v[b].emplace_back(a, c);
		}

		ll ans = dikj(st, ed, v);
		if (ans == INF) cout << "He is very hot\n";
		else cout << ans << '\n';
	}

	return 0;
}
