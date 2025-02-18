#include<iostream>
using namespace std;

int main(){ ios::sync_with_stdio(0), cin.tie(0);
	char c;
	cin >> c;
	if (c == 'A') cout << '@' << '\n';
	else cout << (char)(c - 1) << '\n';
	return 0;
}
