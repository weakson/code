#include<bits/stdc++.h>
#define ll long long
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define dbug(a) cout << #a << " = " << a << endl;
using namespace std;

int main(){
	weakson;

	int n;
	cin >> n;
	cin.ignore();

	string s;

	for (int i = 0; i < n; i++){
		getline (cin, s);
		string temp = s.substr (0, 10);
		if (temp == "Simon says"){
			cout << s.substr (11, s.size() - 11) << '\n';
		}
	}
}
