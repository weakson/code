#include<iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	int x;
	cin >> x;
	cout << (x * x) % 10 << '\n';
	return 0;
}
