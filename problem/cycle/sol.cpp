#include<bits/stdc++.h>
#define ll long long
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define dbug(a) cout << #a << " = " << a << endl;
using namespace std;

int arr[1000005];
ll prefix_sum[1000005];

int main(){
	weakson;

	int n;
	ll k;
	
	cin >> n >> k;

	prefix_sum[0] = 0;
	for (int i = 1; i <= n; i++){
		ll temp;
		cin >> temp;
		prefix_sum[i] = prefix_sum[i - 1] + temp;
	}

	int round = k / n;
	int rest = k % n;

	cout << round * prefix_sum[n] + prefix_sum[rest] << '\n';

	return 0;
}
