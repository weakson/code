#include<bits/stdc++.h>
#define ll long long
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define dbug(a) cout << #a << " = " << a << endl;
using namespace std;

struct dsu{
	int parent[10005];
	int size[10005];
	dsu (){
		for (int i = 0; i < 10005; i++){
			parent[i] = i;
			size[i] = 1;
		}
	}

	int find_parent (int x){
		//dbug(x);
		if (parent[x] == x) return x;
		return parent[x] = find_parent (parent[x]);
	}

	void unite (int x, int y){
		int X = find_parent (x);
		int Y = find_parent (y);

		if (X == Y) return;

		parent[Y] = min (X, Y);
		parent[X] = min (X, Y);
	}
};


int main(){
	weakson;


	int n, m;
	while (cin >> n >> m){

		dsu DSU;
		for (int i = 0; i < m; i++){
			int a, b;
			cin >> a >> b;

			DSU.unite(a, b);
		}

		int k;
		cin >> k;

		cout << DSU.find_parent (k) << '\n';
	}
}
