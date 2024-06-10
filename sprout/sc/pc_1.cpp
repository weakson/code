#include<bits/stdc++.h>
#define ll long long
#define weakson ios::sync_with_stdio(0), cin.tie(0);
using namespace std;

vector<int> seg, v;

void build (){
	if (l == r){
		seg[id] = 
	}
}

int main(){
	weakson;

	int n, q;
	cin >> n >> q;

	seg.resize(4 * n);
	v.resize(n + 1);

	for (int i = 1; i <= n; i++) cin >> v[i];

	build (1, 1, n);
}
