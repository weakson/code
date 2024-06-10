#include<bits/stdc++.h>
#define weakson ios::sync_with_stdio(0), cin.tie(0);
using namespace std;

int main(){
	int n, m, k;
	cin >> n >> m >> k;
	int a[200005], b[200005];
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	for (int i = 0; i < m; i++){
		cin >> b[i];
	}
	sort (a, a + n);
	sort (b, b + m);
	int ap = 0, bp = 0, ans = 0;
	while (ap < n && bp < m){
		if (abs (a[ap] - b[bp]) <= k){
			ap++;
			bp++;
			ans++;
		}
		else if (b[bp] > a[ap] + k){
			ap++;
		}
		else if (b[bp] < a[ap] - k){
			bp++;
		}
	}
	cout << ans << '\n';
	return 0;
}
