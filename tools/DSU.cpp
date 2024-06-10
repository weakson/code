#include<bits/stdc++.h>
#define ll long long
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define dbug(a) cout << #a << " = " << a << endl;
using namespace std;

struct dsu{
	int parent[1000005];
	int size[1000005];
	dsu (int x){
		for (int i = 0; i < 1000005; i++){
			parent[i] = i;
			size[i] = 1;
		}
	}

	int find_parent (int x){
		if (parent[x] == x) return x;
		return parent[x] = find_parent (parent[x]);
	}

	bool same (int x, int y){
		return find_parent (x) == find_parent (y);
	}

	void unite (int x, int y){
		int X = find_parent (x);
		int Y = find_parent (y);

		if (X == Y) return;

		if (X > Y) swap (X, Y);

		parent[X] = Y;

		size[Y] += size[X];
	}
};


int main(){
	weakson;
}
