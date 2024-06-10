#include<iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	int n, ans = 0;
	cin >> n;
	ans += (n % 10) * 100;
	n /= 10;
	ans += (n % 10) * 10;
	n /= 10;
	ans += n;
	cout << ans << '\n';
	return 0;
}
