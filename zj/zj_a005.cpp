#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	int seq[4];// index: 0, 1, 2, 3
	for(int i = 0; i < t; i++){
		for(int j = 0; j < 4; j++){
			cin >> seq[j];
			cout << seq[j] << ' ';
		}
		if(seq[3] - seq[2] == seq[1] - seq[0]){
			cout << seq[3] + (seq[3] - seq[2]) << '\n';
		}
		else{
			cout << seq[3] * (seq[3] / seq[2]) << '\n';
		}
	}
}
