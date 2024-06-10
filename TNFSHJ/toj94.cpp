#include<iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	short k;
	cin >> k;
	if(k == 12){
		cout << "Winter!\n";
	}
	else if(k <= 2){
		cout << "Winter!\n";
	}
	else if(k <= 5){
		cout << "Spring!\n";
	}
	else if(k <= 8){
		cout << "Summer!\n";
	}
	else if(k <= 11){
		cout << "Autumn!\n";
	}
	return 0;
}
