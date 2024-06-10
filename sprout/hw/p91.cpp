#include<bits/stdc++.h>
#define ll long long
#define weakson ios::sync_with_stdio(0), cin.tie(0);
using namespace std;

int main(){
	weakson;
	int t;
	cin >> t;
	while (t--){
		ll n, temp;
		cin >> n;
		temp = n;
		vector<int> v;
		for (int i = 9; i >= 2; i--){
			if (temp % i == 0){
				v.emplace_back(i);
				temp /= i;
				i++;
			}
		}
		if (n == 1){
			cout << 1 << '\n';
			continue;
		}
		if (temp >= 10){
			cout << -1 << '\n';
			continue;
		}
		sort (v.begin(), v.end());
		for (int i : v) cout << i;
		cout << '\n';
	}
	return 0;
}
