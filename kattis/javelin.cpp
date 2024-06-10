#include<iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	int n;
	cin >> n;
	int sum = 0;
	for (int i = 0; i < n; i++){
		int temp;
		cin >> temp;
		sum += temp;
	}
	sum -= (n - 1);
	cout << sum << '\n';
	return 0;
}
