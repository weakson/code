#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

int arr[10] = {0, 3, 3, 7, 1, 3, 1, 1, 3, 7};

int main(){
	weakson;

	int t;
	cin >> t;

	while (t--){
		string s;
		cin >> s;

		cout << s[0];
		cout << arr[s[0] - '0'] << '\n';
	}
	return 0;
}
