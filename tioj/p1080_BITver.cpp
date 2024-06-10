#include<bits/stdc++.h>
#define ll long long
#define lowbit(x) x & -x
#define weakson ios::sync_with_stdio(0), cin.tie(0);
using namespace std;

struct BIT{
	int sz;
	vector<ll> bit;

	void init (int n){
		sz = n;
		bit.resize(sz + 1);
	}

	void modify (ll v){
		for (; v <= sz; v += lowbit(v)){
			bit[v]++;
		}
	}

	ll query (int q){
		ll sum = 0;
		for (; q; q -= lowbit(q)){
			sum += bit[q];
		}
		return sum;
	}

};

int main(){
	weakson;

	int n, t = 1;
	while (cin >> n){
		if (n == 0) break;

		cout << "Case #" << t << ": ";

		BIT bt;
		vector<ll> a(n), b(n);

		for (int i = 0; i < n; i++){
			cin >> a[i];
			b[i] = a[i];
		}

		sort (a.begin(), a.end());
		a.erase(unique(a.begin(), a.end()), a.end());

		for (int i = 0; i < n; i++){
			b[i] = lower_bound(a.begin(), a.end(), b[i]) - a.begin() + 1;
		}

		bt.init(a.size());

		ll ans = 0;

		for (int i = 0; i < n; i++){
			ans += i - bt.query(b[i]); // i - (element num <= b[i])
			bt.modify(b[i]);
		}

		cout << ans << '\n';

		t++;
	}
	return 0;
}
