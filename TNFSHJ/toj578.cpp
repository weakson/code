#include<iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	int n;
	cin >> n;
	int i=1;
	while(i<n){
		cout << i << '\n';
		i+=2;
	}
	return 0;
}
