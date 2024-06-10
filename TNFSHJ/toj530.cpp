#include<iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	long long p, q;
	cin >> p >> q;
	if(p > q){
		long long tmp = p;
		p = q;
		q = tmp;
	}
	cout << p << ' ' << q << '\n';
	return 0;
}
