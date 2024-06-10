#include<iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	string s[5];
	for (int i = 0; i < 5; i++){
		cin >> s[i];
	}
	int max = 0;
	for (int i = 0; i < 5; i++){
		int sum = 1; //這裡要初始化為1，是因為自己要算進去
		for (int j = 0; j < 5; j++){
			if(j == i) continue;
			if(s[i][0] == s[j][0]){ //我是用字串陣列，所以第1個中括號是第幾個字串，第2個中括號是該字串的第幾個字元
				sum++;
			}
		}
		if(sum > max) max = sum;
	}
	cout << max << '\n';
	return 0;
}
