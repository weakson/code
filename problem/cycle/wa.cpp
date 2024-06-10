#include<bits/stdc++.h>
#define ll long long
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define dbug(a) cout << #a << " = " << a << endl;
using namespace std;

int main(){
	weakson;

	int n, k;
	cin >> n >> k;
	int arr[1000005];

	for (int i = 0; i < n; i++){
		cin >> arr[i];
	}

	ll sum = 0;
	for (int i = 0, j = 0; i < k; i++, j++){
		if (j % n == 0 && j != 0) j = 0;
		sum += arr[j];
	}
	cout << sum << '\n';

	return 0;
}
