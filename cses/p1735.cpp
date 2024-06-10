#include<bits/stdc++.h>
#define ll long long
#define weakson ios::sync_with_stdio(0), cin.tie(0);
using namespace std;

vector<ll> seg, v;

void pull (int id){
	seg[id] = seg[id * 2] + seg[id * 2 + 1];
	return;
}

void build (int id, int l, int r){
	if (l == r){
		seg[id] = v[l];
		return;
	}
	int mid = (l + r) / 2;
	build (id * 2, l, mid);
	build (id * 2 + 1, mid + 1, r);
	pull (id);
	return;
}

ll query (int id, int ql, int qr, int l, int r){
	if (l > qr or r < ql) return 0;
	else if (l >= ql and r <= qr) return seg[id];
	int mid = (l + r) / 2;
	ll a = query (id * 2, ql, qr, l, mid);
	ll b = query (id * 2 + 1, ql, qr, mid + 1, r);	
	return a + b;
}

void modify (int id, int ql, int qr, int l, int r, ll x){
	if (l > qr or r < ql) return;
	if (l == r){
		seg[id] += x;
		return;
	}
	int mid = (l + r) / 2;
	modify (id * 2, ql, qr, l, mid, x);
	modify (id * 2 + 1, ql, qr, mid + 1, r, x);
	pull (id);
	return;
}

void set_v (int id, int ql, int qr, int l, int r, ll x){
	if (l > qr or r < ql) return;
	if (l == r){
		seg[id] = x;
		return;
	}
	int mid = (l + r) / 2;
	set_v (id * 2, ql, qr, l, mid, x);
	set_v (id * 2 + 1, ql, qr, mid + 1, r, x);
	pull (id);
	return;

}

int main(){
	weakson;
	int n, q;
	cin >> n >> q;

	v.resize (n + 1);
	seg.resize(4 * n);

	for (int i = 1; i <= n; i++){
		cin >> v[i];
	}

	build (1, 1, n + 1);

	while (q--){
		int op, a, b;
		cin >> op >> a >> b;
		if (op == 1){
			ll x; cin >> x;
			modify (1, a, b, 1, n + 1, x);
		}
		else if (op == 2){
			ll x; cin >> x;
			set_v (1, a, b, 1, n + 1, x);
		}
		else{
			cout << query (1, a, b, 1, n + 1) << '\n';
		}
	}
	
	return 0;
}
