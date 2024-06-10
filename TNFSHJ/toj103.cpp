#include<bits/stdc++.h>
#define ll long long
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define dbug(a) cout << #a << " = " << a << endl;
using namespace std;

int main(){
	weakson;

	string s1, s2, a, b;

	cin >> s1 >> a >> s2 >> b;

	if ((s1 == s2 and a != b) or (s1 != s2 and a == b)){
		cout << "=~=\n";
	}
	else if (s1 == s2 and a == b){
		cout << "GOOD\n";
	}
	else{
		cout << "OTZ\n";
	}

	return 0;
}
