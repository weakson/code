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

		int cnt = 0;
		ll sum = 0;

		for (int i = 0; i < n; i++){
			ll tmp;
			cin >> tmp;

			if (tmp == 1) cnt++;
			else sum += tmp - 1;
		}

		if (sum < cnt or n == 1) cout << "NO\n";
		else cout << "YES\n";
	}
	return 0;
}
