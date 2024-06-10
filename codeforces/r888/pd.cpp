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
		int n;
		cin >> n;

		vector<ll> v(n);

		ll sum = 0;
		for (int i = 1; i < n; i++){
			sum += i;
			cin >> v[i];
		}

		sum += n;

		if (v.back() == sum) cout << "YES\n";
		else cout << "NO\n";
	}
}
