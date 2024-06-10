#include<iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	int a, b, c;
	cin >> a >> b >> c;
	if((a + b) > c && (b + c) > a && (a + c) > b){
		cout << "yes\n";
	}
	else{
		cout << "no\n";
	}
	return 0;
}
