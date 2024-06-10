#include<bits/stdc++.h>
#define ll long long
#define weakson ios::sync_with_stdio(0), cin.tie(0);
using namespace std;

struct node{
	ll lm; // left max
	ll rm; // right max
	ll sum; // sum of two node
	ll am; // max sum of two node
};

vector<node> seg;
vector<ll> v;

node pull (node l, node r){
	node tmp;
	tmp.lm = max (l.lm, l.sum + r.lm);
	tmp.rm = max (r.rm, r.sum + l.rm);
	tmp.sum = l.sum + r.sum;
	tmp.am = max ({l.am, r.am, l.rm + r.lm});
	return tmp;
}

void build(int id, int l, int r){
	if (l == r){
		seg[id].lm = v[l];
		seg[id].rm = v[l];
		seg[id].sum = v[l];
		seg[id].am = v[l];
		return;
	}

	int mid = (l + r) / 2;

	build (2 * id, l, mid);
	build (2 * id + 1, mid + 1, r);
	seg[id] = pull (seg[id * 2], seg[id * 2 + 1]);

	return;
}

node query (int id, int ql, int qr, int l, int r){
	if (l >= ql and r <= qr) return seg[id];

	int mid = (l + r) / 2;

	if (qr <= mid){
		return query (id * 2, ql, qr, l, mid);
	}
	else if (ql >= mid + 1){
		return query (id * 2 + 1, ql, qr, mid + 1, r);
	}
	else{
		node L = query (id * 2, ql, mid, l, mid);
		node R = query (id * 2 + 1, mid + 1, qr, mid + 1, r);
		return pull (L, R);
	}
}

int main(){
	weakson;

	int n, q;
	cin >> n >> q;

	v.resize (n);
	seg.resize (4 * n);

	for (int i = 1; i <= n; i++) cin >> v[i];

	build (1, 1, n);

	while (q--){
		int l, r;
		cin >> l >> r;
		node ans = query (1, l, r, 1, n);
		cout << (ans.am < 0 ? 0 : ans.am) << '\n';
	}
	return 0;
}
