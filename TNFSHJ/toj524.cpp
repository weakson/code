#include<iostream>
#define ll long long
using namespace std;

int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	ll x, y;
	cin >> x >> y;
	ll a, b;
	a = (x + y) / 2;
	b = (x - y) / 2;
	cout << "a: " << a << ", b: " << b << '\n';
	return 0;
}
