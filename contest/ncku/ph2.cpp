#include<bits/stdc++.h>
#define ll long long
#define weakson ios::sync_with_stdio(0), cin.tie(0);
using namespace std;

int main(){
	weakson;
	int n, m, k;
	cin >> n >> m >> k;
	vector<ll> v(n);
	for (int i = 0; i < n; i++){
		cin >> v[i];
	}
	ll MAX = -1;
	for (int i = 0; i < n; i++){
		ll sum = 0;
		for (int j = i; j < n; j++){
			sum += v[j];
			if (sum > k){
				sum -= v[j];
				break;
			}
		}
		MAX = max (MAX, sum);
	}
	cout << MAX << '\n';
	return 0;
}
