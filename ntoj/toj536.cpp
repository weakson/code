#include<iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	if(a > d || b < c){
		cout << "no\n";
	}
	else{
		cout << "yes\n";
	}
	return 0;
}
