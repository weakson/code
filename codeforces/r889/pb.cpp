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
		ll n;
		cin >> n;

		ll ans = 0, cnt = 0;

		// queue<ll> q;

		// 54! almost equel to 10^18
		for (int i = 1; i <= 50; i++){
			if (n % i == 0){
				// q.push(i);
				cnt++;
			}
			else{

				// if (!q.empty()) cout << "interval = ";
				// while (!q.empty()){
				// 	cout << q.front() << ' ';
				// 	q.pop();
				// }
				// cout << '\n';

				ans = max (cnt, ans);
				cnt = 0;
			}
		}

		cout << ans << '\n';
	}
}
