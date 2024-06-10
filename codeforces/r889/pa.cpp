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
		int n;
		cin >> n;

		vector<int> v(n + 1);

		for (int i = 1; i <= n; i++){
			cin >> v[i];
		}

		int cnt = 0;

		for (int i = 1; i <= n; i++){
			if (v[i] == i) cnt++;
		}

		if (cnt & 1) cout << cnt / 2 + 1 << '\n';
		else cout << cnt / 2 << '\n';
	}
}
