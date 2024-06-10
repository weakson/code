#include<bits/stdc++.h>
#define ll long long
#define weakson ios::sync_with_stdio(0), cin.tie(0);
using namespace std;

bool cmp(ll a, ll b){
	return a > b;
}

int main(){
	weakson;
	ll n, m, k;
	cin >> n >> m >> k;
	vector<ll> v;
	for (int i = 0; i < n; i++){
		ll temp;
		cin >> temp;
		v.emplace_back(temp);
	}
	ll sum = 0;
	for (auto it = v.begin(); it != v.end(); it++){
		if (sum > k){
			cout << sum - (*--it) << '\n';
			break;
		}
		sum += *it;
	}
	return 0;
}
