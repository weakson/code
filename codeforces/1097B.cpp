#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

int main(){
	weakson;

	int n;
	cin >> n;

	vector<int> v(n);

	for (int i = 0; i < n; i++){
		cin >> v[i];
	}

	for (int i = 0; i < (1LL << n); i++){
		ll sum = 0;
		for (int j = 0; j < n; j++){
			if (i & (1 << j)) sum += v[j];
			else sum -= v[j];
		}
		if (sum % 360 == 0){
			cout << "YES\n";
			return 0;
		}
	}
	cout << "NO\n";
}
