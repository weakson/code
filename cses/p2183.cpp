#include<bits/stdc++.h>
#define ll long long
#define weakson ios::sync_with_stdio(0), cin.tie(0);
using namespace std;

int main(){
	weakson;

	int n;
	cin >> n;

	vector<ll> v(n), prefix(n + 1);
	prefix[0] = 0;

	for (int i = 0; i < n; i++){
		cin >> v[i];
	}

	for (int i = 1; i <= n; i++) prefix[i] = prefix[i - 1] + v[i - 1];

	ll ans = -1;
	
	for (int i = 1; i < prefix[n]; i++){
		
	}
}
