#include<bits/stdc++.h>
#define ll long long
#define weakson ios::sync_with_stdio(0), cin.tie(0);
using namespace std;

int main(){
	weakson;
	int t;
	cin >> t;
	while (t--){
		int n, m;
		cin >> n >> m;
		vector<int> v(n), f(m);
		for (int i = 0; i < n; i++) cin >> v[i];
		for (int i = 0; i < m; i++) cin >> f[i];
		sort (v.begin(), v.end());
		sort (f.begin(), f.end());
		int ans = 0, p = 0;
		for (int i = 0; i < m && p < n; i++){
			if (v[p] - f[i] >= 0){
				v[p] -= f[i];
				ans++;
			}
			else{
				i--;
				p++;
			}
		}
		cout << ans << '\n';
		return 0;
	}
}
