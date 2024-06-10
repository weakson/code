#include<iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	int l, d, x;
	cin >> l >> d >> x;
	for(int i=l; i<=d; i++){
		int n = i, sum = 0;
		while(n!=0){
			sum += n % 10;
			n /= 10;
		}
		if(sum == x){
			cout << i << '\n';
			break;
		}
	}
	for(int i=d; i>=l; i--){
		int n = i, sum = 0;
		while(n!=0){
			sum += n % 10;
			n /= 10;
		}
		if(sum == x){
			cout << i << '\n';
			break;
		}
	}
	return 0;
}
