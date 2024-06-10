#include<bits/stdc++.h>
#define ll long long
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define dbug(a) cout << #a << " = " << a << endl;
using namespace std;

int main(){
	weakson;

	int t;
	cin >> t;
	
	while (t--){
		int n, m, k, H;

		cin >> n >> m >> k >> H;

		vector<int> v (n);

		for (int i = 0; i < n; i++) cin >> v[i];

		ll ans = 0;
		for (int i = 0; i < n; i++){
			int tmp = abs(H - v[i]);
			if (tmp / k < m and tmp % k == 0 and tmp != 0){
				ans++;
			}
		}

		cout << ans << '\n';
	}

	return 0;
}
