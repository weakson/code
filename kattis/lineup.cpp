#include<bits/stdc++.h>
#define ll long long
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define dbug(a) cout << #a << " = " << a << endl;
using namespace std;

int main(){
	weakson;

	int n;
	cin >> n;

	string s[25];

	for (int i = 0; i < n; i++) cin >> s[i];

	int decr = 0, incr = 0;

	for (int i = 1; i < n; i++){
		if (s[i] > s[i - 1]) incr++;
		else if (s[i] < s[i - 1]) decr++;
	}

	if (incr == n - 1) cout << "INCREASING\n";
	else if (decr == n - 1) cout << "DECREASING\n";
	else cout << "NEITHER\n";

	return 0;
}
