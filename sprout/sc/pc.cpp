#include<bits/stdc++.h>
#define ll long long
#define weakson ios::sync_with_stdio(0), cin.tie(0);
using namespace std;

struct node{
	int tag;
	int ans;
};

vector<int> pos, v;
vector<node> seg;

int pull (int id){
	return seg[id * 2].ans + seg[id * 2 + 1].ans;
}

void build (int id, int l, int r){
	if (l == r){
		if (v[l] > 0) seg[id].ans = 1;
		pos[l] = id;
		return;
	}

	int mid = (l + r) / 2;

	build (id * 2, l, mid);
	build (id * 2 + 1, mid + 1, r);

	seg[id].ans = pull (id);
	
	return;
}

void mod (int id, int l, int r, int x, int y){
	if (l == r and l == x){
		v[l] += y;
		if (v[l] > 0) seg[id].ans = 1;
		return;
	}

	if (l > x or r < x) return;

	int mid = (l + r) / 2;

	mod (id * 2, l, mid, x, y);
	mod (id * 2 + 1, mid + 1, r, x, y);

	seg[id].ans = pull (id);
	
	return;
}

int query (int id, int ql, int qr, int l, int r, int q){
	if (l >= ql and r <= qr){
		return seg[id].ans;
	}

	if (l > qr or r < ql) return 0;

	int mid = (l + r) / 2;

	int a = query (id * 2, ql, qr, l, mid, q);
	int b = query (id * 2 + 1, ql, qr, mid + 1, r, q);

	return a + b;
}

int main(){
	weakson;

	int n, q;
	cin >> n >> q;

	seg.resize(4 * n);
	pos.resize(n + 1);
	v.resize(n + 1);


	for (int i = 1; i <= n; i++){
		cin >> v[i];
	}

	build (1, 1, n);

	while (q--){
		int op;
		
		cin >> op;

		if (op & 1){
			int x, y;
			cin >> x >> y;
			mod (1, 1, n, x, y);
		}
		else{
			int l, r, x;
			cin >> l >> r >> x;

			// for (int i = l; i <= r; i++){

			// 	int p = pos[i];

			// 	v[i] += seg[p].tag;
			// 	seg[p].tag = 0;

			// 	if (v[i] > x) seg[p].ans = 1;
			// 	else seg[p].ans = 0;

			// 	while (true){
			// 		if (p & 1) p = (p - 1) / 2;
			// 		else p /= 2;

			// 		seg[p].ans = pull (p);
			// 		if (p == 1) break;
			// 	}
			// }

			cout << query (1, l, r, 1, n, x) << '\n';
		}
	}
	return 0;
}
