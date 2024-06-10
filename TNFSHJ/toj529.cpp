#include<iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	long long a, b;
	cin >> a >> b;
	if(a < b){
		long long temp = a;
		a = b;
		b = temp;
	}
	cout << a - b << '\n';
	return 0;
}
