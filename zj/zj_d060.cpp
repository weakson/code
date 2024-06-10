#include<bits/stdc++.h>
#define ll long long
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define dbug(a) cout << #a << " = " << a << endl;
using namespace std;

int main(){
	weakson;
	int n;
	cin >> n;
	/*

	if (n <= 25) cout << 25 - n << '\n';
	else cout << 25 + (60 - n) << '\n';

	*/
	cout << (25 + 60 - n) % 60 << '\n';
}
