#include<bits/stdc++.h>
#define ll long long
#define weakson ios::sync_with_stdio(0), cin.tie(0);
using namespace std;

vector<ll> seg, v;

ll pull (ll l, ll r){
	return l + r;
}

void build (int id, int l, int r){
	if (l == r){
		seg[id] = 1;
		return;
	}

	int mid = (l + r) / 2;

	build (id * 2, l, mid);
	build (id * 2 + 1, mid + 1, r);

	seg[id] = pull (seg[id * 2], seg[id * 2 + 1]);

	return;
}

void turn (int id, int ql, int qr, int l, int r){
	if (l > qr or r < ql) return;
	if (l == r){
		if (v[l] == 3){
			v[l] = 1;
			seg[id] = 1;
		}
		else{
			v[l]++;
			seg[id] = 0;
		}
		return;
	}

	int mid = (l + r) / 2;

	turn (id * 2, ql, qr, l, mid);
	turn (id * 2 + 1, ql, qr, mid + 1, r);

	seg[id] = pull (seg[id * 2], seg[id * 2 + 1]);

	return;
}

void reset (int id, int ql, int qr, int l, int r){
	if (l > qr or r < ql) return;
	if (l == r){
		v[l] = 1;
		seg[id] = 1;
		return;
	}

	int mid = (l + r) / 2;

	turn (id * 2, ql, qr, l, mid);
	turn (id * 2 + 1, ql, qr, mid + 1, r);

	seg[id] = pull (seg[id * 2], seg[id * 2 + 1]);

	return;
}

ll count (int id, int ql, int qr, int l, int r){
	if (l >= ql and r <= qr) return seg[id];
	if (l > qr or r < ql) return 0LL;
	
	int mid = (l + r) / 2;

	int a = count (id * 2, ql, qr, l, mid);
	int b = count (id * 2 + 1, ql, qr, mid + 1, r);

	return a + b;
}

int main(){
	weakson;

	int n, q;
	cin >> n >> q;

	seg.resize (4 * n);
	v.resize (n + 1, 1);

	build (1, 1, n);

	while (q--){
		string op;
		int a, b;
		cin >> op >> a >> b;

		if (op == "TURN"){
			turn (1, a, b, 1, n);
		}
		else if (op == "RESET"){
			reset (1, a, b, 1, n);
		}
		else{
			cout << count (1, a, b, 1, n) << '\n';
		}
	}

	return 0;
}
