#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	for(int i=1 ; i<=n ; i++){ // 計算目前在第幾行
		for(int j=0 ; j<(n-i) ; j++){
			cout << '_';
		}
		for(int j=0 ; j<2*i-1 ; j++){
			cout << '*';
		}
		for(int j=0 ; j<(n-i) ; j++){
			cout << '_';
		}
		cout << '\n';
	}
	return 0;
}
