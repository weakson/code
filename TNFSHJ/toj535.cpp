#include<iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	short s;
	cin >> s;
	if(s == 100){
		cout << "S\n";
	}
	else if(s >= 90){
		cout << "A\n";
	}
	else if(s >= 80){
		cout << "B\n";
	}
	else if(s >= 70){
		cout << "C\n";
	}
	else if(s >= 60){
		cout << "D\n";
	}
	else{
		cout << "F\n";
	}
	return 0;
}
