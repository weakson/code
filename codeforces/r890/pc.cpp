#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

int main(){
	weakson;

	int t;
	cin >> t;

	while (t--){
		ll n, k;
		cin >> n >> k;

		vector<ll> v(n);

		ll MAX = 0, idx = 0;

		for (int i = 0; i < n; i++){
			cin >> v[i];

			if (v[i] > MAX){
				MAX = v[i];
				idx = i;
			}
		}

		while (k > 0 && idx > 0){
			ll tmp = v[idx] - v[idx - 1] + 1;
			if (tmp <= k){
				v[idx - 1] += tmp;
				k -= tmp;
				MAX = v[idx - 1];
			}
			else break;
			idx--;
		}

		cout << MAX << '\n';

	}
}
