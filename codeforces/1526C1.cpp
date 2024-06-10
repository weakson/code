#include<bits/stdc++.h>
#include<iostream>
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

	vector<ll> v(n);
	priority_queue<int, vector<int>, greater<int> > q;

	for (int i = 0; i < n; i++) cin >> v[i];

	ll sum = 0, ans = 0;
	for (int i = 0; i < n; i++){
		if (v[i] < 0) q.push(v[i]);
		sum += v[i];
		ans++;
		while (sum < 0){
			sum -= q.top();
			q.pop();
			ans--;
		}
	}
	
	cout << ans << '\n';
}
