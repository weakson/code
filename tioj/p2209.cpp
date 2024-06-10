#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

ll find_num (int n){
	ll sum = 0;
	int cnt = 2;
	while (n != 1){
		if (n % cnt == 0){
			n /= cnt;
			sum++;
		}
		else cnt++;
	}
	return sum;
}

int main(){
	weakson;

	int t;
	cin >> t;

	while (t--){
		int x, y;
		cin >> x >> y;

		ll a = find_num (x);
		ll b = find_num (y);

		if ((a & 1) and (b & 1) 
	}

	return 0;
}
