#include<bits/stdc++.h>
#define ll long long
#define weakson ios::sync_with_stdio(0), cin.tie(0);
using namespace std;

vector<ll> v, min_ans, max_ans;
deque<ll> max_dq, min_dq;

int main(){
	ll n, k;
	while (cin >> n >> k){
		min_ans.clear();
		max_ans.clear();
		max_dq.clear();
		min_dq.clear();
		k = min (n, k);
		v.resize(n);
		for (int i = 0; i < n; i++) cin >> v[i];
		for (int i = 0; i < n; i++){
			while (!max_dq.empty() and v[i] > v[max_dq.back()]){
				max_dq.pop_back();
			}
			while (!min_dq.empty() and v[i] < v[min_dq.back()]){
				min_dq.pop_back();
			}
			max_dq.emplace_back(i);
			min_dq.emplace_back(i);
			while (max_dq.front() < i - k + 1) max_dq.pop_front();
			while (min_dq.front() < i - k + 1) min_dq.pop_front();
			if (i - k + 1 >= 0) max_ans.emplace_back(v[max_dq.front()]);
			if (i - k + 1 >= 0) min_ans.emplace_back(v[min_dq.front()]);
		}
		for (ll i : min_ans) cout << i << ' ';
		cout << '\n';
		for (ll i : max_ans) cout << i << ' ';
		cout << '\n';
	}
	return 0;
}
