#include<iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	int a, b;
	cin >> a >> b;
	if(a % 2 == b % 2){
		cout << "yes\n";
	}
	else{
		cout << "no\n";
	}
	return 0;
}
