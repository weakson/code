#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int i = 0;
	while(n != 0){
		i++;
		n /= 10;
	}
	cout << i << '\n';
	return 0;
}
