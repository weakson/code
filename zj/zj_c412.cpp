#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		int numo = 0, numw = 0, sum = 0;
		for(int i=0; i<s.size(); i++){
			if(s[i] == 'O'){
				numo++;
				if(numo > 1){
					sum += numw;
				}
			}
			if(s[i] == 'w' && numo != 0){
				numw++;
			}
		}
		cout << sum << '\n';
	}
	return 0;
}
