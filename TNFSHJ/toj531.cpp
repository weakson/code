#include<iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	long long a, b;
	cin >> a >> b;
	if(b > a){
		cout << "true\n";
	}
	else{
		cout << "false\n";
	}
	return 0;
}
