#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

int main(){
	weakson;

	int n;
	cin >> n;

	int res = n % 5;

	if (res == 1) cout << "S\n";
	else if (res == 2) cout << "c\n";
	else if (res == 3) cout << "i\n";
	else if (res == 4) cout << "s\n";
	else cout << "t\n";
}
