#include<iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	long long a, b, n;
	cin >> a >> b >> n;
	if(n > b){
		cout << "no\n";
	}
	else if(n < a){
		cout << "no\n";
	}
	else{
		cout << "yes\n";
	}
	return 0;
}
