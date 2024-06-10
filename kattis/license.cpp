#include<iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	int n;
	cin >> n;
	int day, least = 1e9, temp;
	for (int i = 0; i < n; i++){
		cin >> temp;
		if(temp < least){
			day = i;
			least = temp;
		}
	}
	cout << day << '\n';
	return 0;
}
