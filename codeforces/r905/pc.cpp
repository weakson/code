#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

vector<int> v;

int tw(int n){
	bool is_f = false;
	for (int i = 0; i < n; i++){
		if (v[i] % 2 == 0) is_f = true;
	}
	return !is_f;
}

int th(int n){
	int MIN = 10;
	for (int i = 0; i < n; i++){
		if (v[i] % 3 == 0) return 0;
		int temp = 3 - (v[i] % 3);
		MIN = min (MIN, temp);
	}
	return MIN;
}

int fo(int n){
	int cnt = 0, MIN = 10;
	for (int i = 0; i < n; i++){
		if (v[i] % 4 == 0) return 0;
		else if (v[i] % 2 == 0) cnt++;
		int temp = 4 - v[i] % 4;
		MIN = min (MIN, temp);
	}
	if (cnt >= 2) return 0;
	else return min(MIN, 2 - cnt);
}

int fi(int n){
	int MIN = 10;
	for (int i = 0; i < n; i++){
		if (v[i] % 5 == 0) return 0;
		int temp = 5 - v[i] % 5;
		MIN = min (MIN, temp);
	}
	return MIN;
}

int main(){
	weakson;

	int t; cin >> t;

	while (t--){
	
		int n, k;
		cin >> n >> k;

		v.resize(0);
		v.resize(n);

		for (int i = 0; i < n; i++){
			cin >> v[i];
		}

		int ans;
		if (k == 2) ans = tw(n);
		else if (k == 3) ans = th(n);
		else if (k == 4) ans = fo(n);
		else if (k == 5) ans = fi(n);

		cout << ans << '\n';
	}
}
