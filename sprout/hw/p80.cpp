#include<bits/stdc++.h>
#define ll long long
#define INF 1e8
#define weakson ios::sync_with_stdio(0), cin.tie(0);
using namespace std;

vector<ll> seg, v;

void pull (int id){
	seg[id] = min (seg[id * 2 + 1], seg[id * 2 + 2]);
	return;
}

void build (int id, int l, int r){
	if (l == r){
		seg[id] = v[l];
		return;
	}
	int mid = (l + r) / 2;
	build (id * 2 + 1, l, mid);
	build (id * 2 + 2, mid + 1, r);
	pull (id);
	return;
}

void modify (int id, int qid, int l, int r, int x){
	if (l > qid or r < qid) return;
	if (l == qid and r == qid){
		seg[id] = x;
		return;
	}
	int mid = (l + r) / 2;
	if (qid <= mid) modify (id * 2 + 1, qid, l, mid, x);
	else modify (id * 2 + 2, qid, mid + 1, r, x);
	pull (id);
	return;
}

int query (int id, int ql, int qr, int l, int r){
	if (l > qr or r < ql) return INF;
	if (l >= ql and r <= qr) return seg[id];
	int mid = (l + r) / 2;
	int a = query (id * 2 + 1, ql, qr, l, mid);
	int b = query (id * 2 + 2, ql, qr, mid + 1, r);
	return min (a, b);
}

int main(){
	weakson;

	int t, n;
	cin >> t >> n;

	v.resize(n);
	seg.resize(4 * n);

	for (int i = 0; i < n; i++) cin >> v[i];

	build (0, 0, n - 1);

	while (t--){
		int op, x, y;
		cin >> op >> x >> y;
		if (op == 1){
			cout << query (0, x, y, 0, n - 1) << '\n';
		}
		else{
			modify (0, x, 0, n - 1, y);
		}
	}
}
