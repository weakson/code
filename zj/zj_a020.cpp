#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

int num[30] = {10, 11, 12, 13, 14, 15, 16, 17, 34, 18, 19, 20, 21, 22, 35, 23, 24, 25, 26, 27, 28, 29, 32, 30, 31, 33};

int main(){
	weakson;

	string s;
	cin >> s;
	
	int idx = s[0] - 'A';

	int sum = num[idx] / 10;
	sum += (num[idx] % 10) * 9;
	for (int i = 1; i <= 8; i++){
		sum += (s[i] - '0') * (9 - i);
	}
	sum += s[9] - '0';

	if (sum % 10) cout << "fake\n";
	else cout << "real\n";

	return 0;
}
