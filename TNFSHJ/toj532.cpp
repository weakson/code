#include<iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	long long a, b, ans2 = 0, ans3 = 0;
	cin >> a >> b;
	if(a % 2 == 0){
		ans2++;
	}
	if(a % 3 == 0){
		ans3++;
	}
	if(b % 2 == 0){
		ans2++;
	}
	if(b % 3 == 0){
		ans3++;
	}
	cout << ans2 << ' ' << ans3 << '\n';
}
