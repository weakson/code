#include<bits/stdc++.h>
#define ll long long
#define weakson ios::sync_with_stdio(0), cin.tie(0);
using namespace std;

int main(){
	weakson;
	int n, q;
	cin >> n >> q;
	vector<ll> v(n), prefix_sum(n + 1);
	prefix_sum[0] = 0;
	for (int i = 0; i < n; i++){
		cin >> v[i];
		prefix_sum[i + 1] = prefix_sum[i] + v[i];
	}
	while (q--){
		int l, r, k;
		cin >> l >> r >> k;
		cout << (prefix_sum[r] - prefix_sum[l - 1]) * 2 << '\n';
	}
	return 0;
}
