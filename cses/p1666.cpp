#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

ll n, m;
vector<vector<ll> > v;
bitset<100005> visited;

void dfs (int x){
	visited[x] = true;
	for (auto i : v[x]){
		if (!visited[i]){
			dfs (i);
		}
	}
	return;
}

int main(){
	weakson;

	cin >> n >> m;
	v.resize (n + 1);

	for (int i = 0; i < m; i++){
		ll a, b;
		cin >> a >> b;
		v[a].emplace_back(b);
		v[b].emplace_back(a);
	}

	vector<ll> cnt;
	for (int i = 1; i <= n; i++){
		if (!visited[i]){
			dfs (i);
			cnt.emplace_back (i);
		}
	}

	int num = cnt.size();
	cout << num - 1 << '\n';
	for (int i = 0; i < num - 1; i++){
		cout << cnt[i] << ' ' << cnt[i + 1] << '\n';
	}

	return 0;
}
