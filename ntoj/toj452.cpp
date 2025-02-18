#include<bits/stdc++.h>
#define ll long long
#define weakson ios::sync_with_stdio(0), cin.tie(0);
using namespace std;

vector<vector<int> > v;
vector<set<int> > bk_e;
vector<bool> visited;

void dfs (int ve){
	visited[ve] = true;

	for (int i : v[ve]){
		if (!visited[i]){
			dfs (i);
		}
		else{
			bk_e[ve].insert(i);
			bk_e[i].insert(ve);
		}
	}

	return;
}

int main(){
	weakson;
	
	int n, m, q;
	cin >> n >> m >> q;

	v.resize(n + 1);
	bk_e.resize(n + 1);
	visited.resize(n + 1);

	for (int i = 0; i < m; i++){
		int a, b;
		cin >> a >> b;
		if (binary_search(v[a].begin(), v[a].end(), b)){
			v[a].emplace_back(b);
			v[b].emplace_back(a);
		}
	}
}
