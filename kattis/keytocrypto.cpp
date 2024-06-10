#include<iostream>
using namespace std;

int main(){
	string s, key, ans;
	cin >> s >> key;
	for (int i = 0; i < s.size(); i++){
		if((char)(s[i] - (key[i] - 'A') ) < 'A'){
			ans += (char)('Z' - (s[i] - (key[i] - 'A')));
			key += (char)('Z' - (s[i] - (key[i] - 'A')));
		}
		else{
			ans += (char)(s[i] - (key[i] - 'A'));
			key += (char)(s[i] - (key[i] - 'A'));
		}
	}
	cout << ans << '\n';
	return 0;
}
