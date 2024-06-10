#include<bits/stdc++.h>
#define ll long long
#define weakson ios::sync_with_stdio(0), cin.tie(0);
using namespace std;

int main(){
	weakson;
	string s;
	while(cin >> s){
		if (s == "0") break;
		int len = s.size();
		int odd_sum = 0, even_sum = 0;
		for (int i = 0; i < len; i += 2){ // odd sum
			odd_sum += s[i] - '0';
		}
		for (int i = 1; i < len; i += 2){ // even sum
			even_sum += s[i] - '0';
		}
		int ans = abs(odd_sum - even_sum);
		if (ans % 11 == 0){
			cout << s << " is a multiple of 11.\n";
		}
		else{
			cout << s << " is not a multiple of 11.\n";
		}
	}
	return 0;
}
