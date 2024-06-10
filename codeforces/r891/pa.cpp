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

		ll sum = 0;

		for (int i = 0; i < n; i++){
			int temp;
			cin >> temp;

			sum += temp;
		}

		if (n > 1 && sum % 2 == 0) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
