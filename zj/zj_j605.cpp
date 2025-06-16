#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

int main(){
	weakson;

	int K;
	cin >> K;

	int max_score = -1, max_time, error_cnt = 0;

	for (int i = 0; i < K; i++){
		int t, s;
		cin >> t >> s;

		if (s > max_score){
			max_score = s;
			max_time = t;
		}
		if (s == -1){
			error_cnt++;
		}
	}

	int total = max_score - K - error_cnt * 2;

	if (total < 0) cout << 0 << ' ' << max_time << '\n';
	else cout << total << ' ' << max_time << '\n';
}
