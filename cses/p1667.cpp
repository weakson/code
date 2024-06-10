#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

vector<vector<int> > v;
vector<int> par;
int n, m;

void bfs (){
	queue<int> q;
	bitset<100005> vis;
	
	q.emplace (1);
	vis[1] = true;
	bool is_found = false;

	while (!q.empty()){
		int u = q.front();
		q.pop();

		for (auto i : v[u]){
			if (!vis[i]){
				vis[i] = true;
				q.emplace (i);
				par[i] = u;
			}
			if (i == n){
				is_found = true;
				break;
			}
		}
		if (is_found) break;
	}

	if (!is_found){
		cout << "IMPOSSIBLE\n";
		return;
	}

	int temp = n;
	vector<int> ans;
	while (temp != 1){
		ans.push_back (temp);
		temp = par[temp];
	}
	ans.push_back (1);

	cout << ans.size() << '\n';
	while (!ans.empty()){
		cout << ans.back() << ' ';
		ans.pop_back();
	}
	cout << '\n';
	
	return;
}

int main(){
	weakson;

	cin >> n >> m;
	v.resize (n + 1);
	par.resize (n + 1);

	for (int i = 0; i < m; i++){
		int a, b;
		cin >> a >> b;
		v[a].emplace_back(b);
		v[b].emplace_back(a);
	}

	bfs();

	return 0;
}
