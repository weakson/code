#include<iostream>
#include<vector>
using namespace std;

vector<int> seg, arr;

int pull(int id){
	return seg[id] = seg[id * 2] + seg[id * 2 + 1];
}

void build(int l, int r, int id){
	if(l == r){
		seg[id] = arr[l];
		return;
	}
	int m = (l + r) / 2;
	build(l, m, id * 2);
	build(m + 1, r, id * 2 + 1);
	pull(id);
	return;
}

int query(int ql, int qr, int l, int r, int id){
	if(l > qr || r < ql){
		return 0;
	}
	if(l >= ql && r <= qr){
		return seg[id];
	}
	int m = (l + r) / 2;
	int a = query(ql, qr, l, m, id * 2);
	int b = query(ql, qr, m + 1, r, id * 2 + 1);
	return a + b;
}

int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int n;
	cin >> n;
	seg.resize(4 * n);
	arr.resize(n);
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	build(0, n - 1, 1);
	for(auto i: seg){
	   cout << i << ' ';
	}
	cout << '\n';
	int ql, qr;
	cin >> ql >> qr;
	int temp = query(ql, qr, 0, n - 1, 1);
	cout << "temp= " << temp << '\n';
	return 0;
}
