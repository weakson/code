#include<bits/stdc++.h>
#define ll long long
#define weakson ios::sync_with_stdio(0), cin.tie(0);
using namespace std;

vector<vector<int> > v;

int dfs (int node, int sum){
	if (v[node].size() == 0) return sum;
	for (int i : v[node]){
		sum = dfs (i, sum + 1);
	}
	return sum;
}

int main(){
	weakson;
	int t;
	cin >> t;
	for (int i = 0; i < t; i++){
		int n, m;
		cin >> n >> m;
		v.clear();
		v.resize(n + 1);
		for (int j = 0; j < m; j++){
			int x, y;
			cin >> x >> y;
			v[x].emplace_back(y);
		}
		int q;
		cin >> q;
		while (q--){
			int r;
			cin >> r;
			int dis = 1;
			// for (int j : v[r]) cout << "j = " << j << '\n';
			for (int j : v[r]){
				dis += dfs(j, 1);	
			}
			cout << dis << '\n';
		}
	}
	return 0;
}
