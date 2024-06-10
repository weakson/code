#include<iostream>
using namespace std;

int main(){
	int arr[5] = {42, 9, 48, 15, 97}, n = 5;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < i; j++){
			if (arr[j] > arr[j + 1]){
				swap(arr[j + 1], arr[j]);
			}
		}
	}
	for (int i : arr) cout << i << ' ';
	cout << '\n';
	return 0;
}
