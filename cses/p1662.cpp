#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	int n;
	cin >> n;
	vector<int> v(n, 0), sum(n + 1);
	sum[0] = 1;
	for (int i = 1; i <= n; i++){
		int temp;
		cin >> temp;
		sum[i] = sum[i - 1] + temp;
		v[(sum[i] + (abs(sum[i]) / n + 1) * n )% n]++;
	}
	long long ans = 0;
	for (int i : v){
		ans += i * (i - 1) / 2;
	}
	cout << ans << '\n';
}
