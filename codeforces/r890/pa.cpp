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
		int n;
		cin >> n;

		vector<ll> v(n + 1), st (n + 1);
		priority_queue<pair<ll, ll> > pq;

		for (int i = 1; i <= n; i++){
			cin >> v[i];
			st[i] = v[i];
			pq.push({v[i], i});
		}

		sort (st.begin(), st.end());

		ll ans = 0;
		for (int i = n; i >= 1; i--){
			if (st[i] != v[i]){
				int idx;
				do{
					idx = pq.top().S;
					ans = pq.top().F;
					pq.pop();
				}while (idx > i);
				break;
			}
		}
		cout << ans << '\n';
	}
}
