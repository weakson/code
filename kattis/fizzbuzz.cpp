#include<iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	int x, y, n;
	cin >> x >> y >> n;
	for(int i=1; i<=n; i++){
		bool b = 0;
		if(i % x == 0){
			cout << "Fizz";
			b = 1;
		}
		if(i % y == 0){
			cout << "Buzz";
			b = 1;
		}
		if(b == 0){
			cout << i;
		}
		cout << '\n';
	}
	return 0;
}
