#include<iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	int a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;
	if(a == c){
		cout << e << ' ';
	}
	else if(c == e){
		cout << a << ' ';
	}
	else{
		cout << c << ' ';
	}
	if(b == d){
		cout << f << '\n';
	}
	else if(d == f){
		cout << b << '\n';
	}
	else{
		cout << d << '\n';
	}
	return 0;
}
