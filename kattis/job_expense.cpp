#include<iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	int n;
	cin >> n;
	int sum = 0, temp;
	for(int i=0; i<n; i++){
		cin >> temp;
		if(temp < 0){
			sum += -temp;
		}
	}
	cout << sum << '\n';
	return 0;
}
