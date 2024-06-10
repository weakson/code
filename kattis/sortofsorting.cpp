#include<iostream>
#include<algorithm>
#define ll long long
using namespace std;

bool cmp(string a, string b){
	if (a[0] == b[0]){
		if (a[1] == b[1]){
			return false;
		}
		else{
			return a[1] < b[1];
		}
	}
	else{
		return a[0] < b[0];
	}
}

int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	int n;
	while (cin >> n){
		if (n == 0) break;
		string name[205];
		for (int i = 0; i < n; i++){
			cin >> name[i];
		}
		stable_sort (name, name + n, cmp);
		for (int i = 0; i < n; i++){
			cout << name[i] << '\n';
		}
		cout << '\n';
	}
	return 0;
}
