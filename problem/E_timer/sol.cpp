#include<bits/stdc++.h>
#define ll long long
#define weakson ios::sync_with_stdio(0), cin.tie(0);
using namespace std;

int main(){
	weakson;

	int n, q, k;
	cin >> n >> q;

	vector<int> v(n + 1);

	for (int i = 1; i <= n; i++) cin >> v[i];

	deque<int> dq_M, dq_m;

	while (q--){
		cin >> k;

		dq_M.clear();
		dq_m.clear();

		ll sum = 0;

		for (int i = 1; i < k; i++){
			sum += v[i];
			
			while (!dq_M.empty() and v[i] > v[dq_M.back()]){
				dq_M.pop_back();
			}

			while (!dq_m.empty() and v[i] < v[dq_m.back()]){
				dq_m.pop_back();
			}

			dq_m.push_back(i);
			dq_M.push_back(i);
		}

		for (int i = k; i <= n; i++){

			sum += v[i];
			
			while (!dq_M.empty() and v[i] > v[dq_M.back()]){
				dq_M.pop_back();
			}

			while (!dq_m.empty() and v[i] < v[dq_m.back()]){
				dq_m.pop_back();
			}

			dq_m.push_back(i);
			dq_M.push_back(i);

			while (dq_M.front() <= i - k) dq_M.pop_front();
			while (dq_m.front() <= i - k) dq_m.pop_front();

			cout << (sum - v[dq_M.front()] - v[dq_m.front()]) / (k - 2) << ' ';

			sum -= v[i - k + 1];
		}
		cout << '\n';
	}
	return 0;
	
}
