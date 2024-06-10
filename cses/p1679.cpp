#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

int n, m;
vector<int> deg, ans;
vector<vector<int> > v;
queue<int> todo;

void topo(){
	while (!todo.empty()){
		int u = todo.front();
		todo.pop();

		for (auto i : v[u]){
			deg[i]--;
			if (deg[i] == 0){
				todo.push (i);
			}
		}
		ans.emplace_back (u);
	}
	return;
}

int main(){
	weakson;

	cin >> n >> m;

	v.resize (n + 1);
	deg.resize (n + 1);

	for (int i = 0; i < m; i++){
		int a, b;
		cin >> a >> b;
		v[a].emplace_back(b);
		deg[b]++;
	}

	for (int i = 1; i <= n; i++){
		if (deg[i] == 0) todo.push (i);
	}

	topo();

	if (ans.size() != n){
		cout << "IMPOSSIBLE\n";
	}
	else{
		for (auto i : ans) cout << i << ' ';
		cout << '\n';
	}

	return 0;
}
