#include<bits/stdc++.h>
#define ll long long
#define weakson ios::sync_with_stdio(0), cin.tie(0);
using namespace std;

priority_queue<ll, vector<ll>, greater<ll> > pq;

int main(){
	weakson;
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		for (int i = 0; i < n; i++){
			ll temp;
			cin >> temp;
			pq.push(temp);
		}
		ll sum = 0;
		while (pq.size() != 1){
			ll a = pq.top();
			pq.pop();
			ll b = pq.top();
			pq.pop();
			sum += a + b;
			pq.push(a + b);
		}
		pq.pop();
		cout << sum << '\n';
	}
	return 0;
}
