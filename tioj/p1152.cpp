#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

vector<vector<int> > v;
bitset<10005> vis;
ll far_dis = 0, far_node;

void dfs (int x, int dis){
	vis[x] = true;
	// dbg (dis);
	// dbg (far_dis);
	// dbg (far_node);
	// cout << '\n';
	if (dis > far_dis){
		far_dis = dis;
		far_node = x;
	}
	for (auto i : v[x]){
		if (!vis[i]){
			dfs (i, dis + 1);
		}
	}
	return;
}

int main(){
	weakson;

	int n;
	cin >> n;

	v.resize(n + 1);

	for (int i = 0; i < n; i++){
		int temp;
		while (cin >> temp){
			if (temp == -1){
				break;
			}
			v[i].emplace_back (temp);
			v[temp].emplace_back(i);
		}
	}

	for (int i = 0; i < n; i++){
		if (!vis[i]){
			// dfs line 14
			dfs (i, 0);
		}
	}

	vis.reset();
	dfs (far_node, 0);

	cout << far_dis << '\n';

	return 0;
}
