#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

int par[15];
ll n, m, k;
ll ans = -1;
bitset<15> vis;

int find_parent (int x){
	if (par[x] == x) return x;
	return par[x] = find_parent(par[x]);
}

void merge (int a, int b){
	int fa = find_parent(a);
	int fb = find_parent(b);

	par[fa] = fb;

	return;
}

bool is_eq (int a, int b){
	return find_parent (a) == find_parent (b);
}

vector<pll> g[15];

void dfs (int cnt, int node, ll sum){
	if (cnt == n - 1){
		ans = max (ans, sum);
		return;
	}
	else{
		for (auto i : g[node]){
			ll pnt = i.F;
			ll w = i.S;
			if (!is_eq (pnt, node) && !vis[pnt]){
				int fa = find_parent (pnt);
				int fb = find_parent (node);
				merge (pnt, node);
				vis[pnt] = true;
				ll temp = sum % k + w % k;
				temp %= k;
				dfs (cnt + 1, pnt, temp);
				vis[pnt] = false;
				par[pnt] = fa;
				par[node] = fb;
			}
		}
	}
	return;
}

int main(){
	weakson;

	for (int i = 1; i <= 10; i++) par[i] = i;

	cin >> n >> m >> k;

	for (int i = 0; i < m; i++){
		ll x, y, w;
		cin >> x >> y >> w;

		g[x].emplace_back (make_pair (y, w));
		g[y].emplace_back (make_pair (x, w));
	}

	dfs (0, 1, 0);

	cout << ans << '\n';

	return 0;
}
