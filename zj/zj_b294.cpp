#include<iostream>
using namespace std;

int main(){
	int n, k;
	cin >> n;
	int sum = 0;
	for(int i=1 ; i<=n ; i++){
		cin >> k;
		sum += i * k;// sum = sum + (i * k);
	}
	cout << sum << '\n';
	return 0;
}
