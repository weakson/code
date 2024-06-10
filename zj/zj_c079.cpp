#include<iostream>
using namespace std;

int main(){
	int n, k;
	while(cin >> n >> k){
		int sum = n, butt = n;
		while(butt >= k){
			n = butt / k;
			butt = butt % k;
			sum = sum + n;
			butt = butt + n;
		}
		cout << sum << '\n';
	}
	return 0;
}
