#include<bits/stdc++.h>
#define ll long long
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define dbug(a) cout << #a << " = " << a << endl;
using namespace std;

int main(){
	weakson;

	int n;
	cin >> n;

	string s[15];

	for (int i = 0; i < n; i++){
		string temp;
		int pos;

		cin >> temp >> pos;

		s[pos] = temp;
	}

	for (int i = 1; i <= 10; i++){
		if (s[i].empty()){
			cout << "EMPTY\n";
		}
		else{
			cout << s[i] << '\n';
		}
	}

	return 0;
}
