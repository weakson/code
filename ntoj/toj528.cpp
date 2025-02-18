#include<iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	long long n;
	cin >> n;
	if(n < 0){
		cout << n * -1 << '\n';
	}
	else{
		cout << n << '\n';
	}
	return 0;
}
