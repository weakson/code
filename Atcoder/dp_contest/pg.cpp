#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

int n, m;
vector<vector<int> > v;
vector<int> deg, dp;
queue<int> todo;

void topo(){
	for (int i = 1; i <= n; i++)
		if (deg[i] == 0) todo.push (i);
	
	while (!todo.empty()){
		int u = todo.front();
		todo.pop();

		for (int i : v[u]){
			deg[i]--;
			dp[i] = max (dp[i], dp[u] + 1);

			if (deg[i] == 0){
				todo.push (i);
			}
		}
	}
	return;
}

int main(){
	weakson;

	cin >> n >> m;
	v.resize (n + 1);
	deg.resize (n + 1);
	dp.resize (n + 1);

	for (int i = 0; i < m; i++){
		int x, y;
		cin >> x >> y;
		v[x].emplace_back (y);
		deg[y]++;
	}

	int ans = -100;
	for (int i = 1; i <= n; i++){
		ans = max (ans, dp[i]);
	}
	for (auto i : dp) cout << i << ' ';
	cout << '\n';

	cout << ans << '\n';

	return 0;
}
