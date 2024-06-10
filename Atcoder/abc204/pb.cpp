#include<iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	int n;
	cin >> n;
	int temp, sum = 0;
	for(int i=0; i<n; i++){
		cin >> temp;
		if(temp > 10){
			sum += temp - 10;
		}
	}
	cout << sum << '\n';
	return 0;
}
