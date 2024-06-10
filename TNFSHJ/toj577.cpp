#include<iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	int n;
	cin >> n;
	int a, b;
	while(n > 0){
		cin >> a >> b;
		int ans = a;
		for(int i=1; i<b; i++){
			ans *= a;
		}
		cout << ans << '\n';
		n--;
	}
	return 0;
}
