#include<bits/stdc++.h>
#define ll long long
#define weakson ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
using namespace std;

ll n, q, k;
ll sum;
vector<ll> v;

int main(){
	weakson;

	cin >> n >> q;

	v.resize(n + 1);
	
	for (int i = 1; i <= n; i++) cin >> v[i];

	for (int j = 0; j < q; j++){
		cin >> k;

		sum = 0;

		multiset<ll> s;

		for (int i = 1; i < k; i++){
			sum += v[i];
			s.insert(v[i]);
		}

		for (int i = k; i <= n; i++){

			sum += v[i];
			s.insert(v[i]);

			cout << (sum - *(s.begin()) - *(--s.end())) / (k - 2) << ' ';

			sum -= v[i - k + 1];
			s.erase(s.find (v[i - k + 1]));
		}
		cout << '\n';
	}
	return 0;
}
