#include<bits/stdc++.h>
#define lowbit(x) x & -x
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define ll long long
using namespace std;

struct BIT{
	vector<ll> bit;
	int n;

	void init(int _n){
		n = _n;
		bit.resize(n + 1);
		return;
	}

	void modify(int pos, int val){
		for (; pos <= n; pos += lowbit(pos)){
			bit[pos] += val;
		}
		return;
	}

	ll query(int x){
		ll sum = 0;
		for (int i = x; i; i -= lowbit(i)){
			sum += bit[i];
		}
		return sum;
	}

};

BIT ft;

int main(){
	weakson;
	int n;
	cin >> n;

	ft.init(n);

	for (int i = 1; i <= n; i++){ // build
		int temp;
		cin >> temp;
		ft.modify(i, temp);
	}

	return 0;
}
