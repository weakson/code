#include<bits/stdc++.h>
#define ll long long
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define dbug(a) cout << #a << " = " << a << endl;
using namespace std;

int main(){
	weakson;

	int n;
	cin >> n;

	ll Max = 0, Min = 1000000005, sum = 0;

	for (int i = 0; i < n; i++){
		int temp;
		cin >> temp;
		if (temp > Max) Max = temp;
		if (temp < Min) Min = temp;
		sum += temp;
	}

	cout << (sum - Max - Min) / (n - 2) << '\n';

	return 0;
}
