#include<iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	string s;
	cin >> s;
	if(s.size() == 4 && s[0] == s[1] && s[0] == s[2] && s[0] == s[3]){
		cout << "GREAT!!\n";
	}
	else{
		cout << "OAQ\n";
	}
	return 0;
}
