#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
struct Node{
	ll l_m, sum;
};
 
vector<Node> seg;
vector<ll> v;
 
void pull (int id, Node l, Node r){
	seg[id].l_m = max({l.l_m, l.sum + r.l_m, 0LL});
	seg[id].sum = l.sum + r.sum;
	return;
}
 
void build (int id, int l, int r){
	if (l == r){
		seg[id].sum = v[l];
		seg[id].l_m = max (v[l], 0LL);
		return;
	}
	int mid = (l + r) / 2;
 
	build (id * 2, l, mid);
	build (id * 2 + 1, mid + 1, r);
	
	pull (id, seg[id * 2], seg[id * 2 + 1]);
}
 
void mod (int id, int l, int r, ll u, ll k){
	if (l == k and r == k){
		seg[id].l_m = max ({0LL, u});
		seg[id].sum = u;
		return;
	}
	
	int mid = (l + r) / 2;
 
	if (k >= l and k <= mid) mod (id * 2, l, mid, u, k);
	else if (k > mid and k <= r) mod (id * 2 + 1, mid + 1, r, u, k);
 
	pull (id, seg[id * 2], seg[id * 2 + 1]);
 
	return;
}
 
Node query (int id, int ql, int qr, int l, int r){
	if (l > qr or r < ql) return {0, 0};
 
	if (l >= ql and r <= qr){
		return seg[id];
	}
 
	int mid = (l + r) / 2;
 
	Node a = query (id * 2, ql, qr, l, mid);
	Node b = query (id * 2 + 1, ql, qr, mid + 1, r);
 
	Node c;
	c.l_m = max ({a.l_m, a.sum + b.l_m, 0LL});
	c.sum = a.sum + b.sum;
 
	return c;
}
 
int main(){
	ios::sync_with_stdio(0), cin.tie(0);
 
	int n, q;
	cin >> n >> q;
 
	seg.resize(4 * n);
	v.resize(n + 1);
 
	for (int i = 1; i <= n; i++){
		cin >> v[i];
	}
 
	build (1, 1, n);
 
	while (q--){
		int op;
		cin >> op;
 
		if (op == 1){
			ll k, u;
			cin >> k >> u;
			mod (1, 1, n, u, k);
		}
		else{
			int a, b;
			cin >> a >> b;
 
			Node tmp = query (1, a, b, 1, n);
 
			cout << max (tmp.l_m, 0LL) << '\n';
		}
	}
	return 0;
}
