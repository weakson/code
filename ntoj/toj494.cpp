#include<iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	int n, k;
	cin >> n >> k;
	int w = n * k;
	for (int i = 0; i < w; i++){
		for	(int j = 0; j < w; j++){
			if( (i / k) % 2 == 1){
				if( (j / k) % 2 == 1){
					cout << '*';
				}
				else{
					cout << ' ';
				}
			}
			else{
				if( (j / k) % 2 == 0){
					cout << '*';
				}
				else{
					cout << ' ';
				}
			}
		}
		cout << '\n';
	}
	return 0;
}
