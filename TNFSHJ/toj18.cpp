#include<bits/stdc++.h>
#define ll long long
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define dbug(a) cout << #a << " = " << a << endl;
using namespace std;

int main(){
	weakson;
	
	string s;

	while (getline (cin, s)){
		string temp;

		int len = s.size();
		for (int i = 0; i < len; i++){
			if (s[i] >= 'a' and s[i] <= 'z') temp += s[i];
			else if (s[i] >= 'A' and s[i] <= 'Z') temp += s[i] + 32;
		}

		bool is_mantra = true;
		for (int i = 0, j = temp.size() - 1; i < temp.size(); i++, j--){
			if (temp[i] != temp[j]) is_mantra = false;
		}

		if (is_mantra) cout << "SETUP! " << s << '\n';
		else cout << s << '\n';
	}
	return 0;
}
