#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	string str;
	int n;
	cin>>n;
	cin>>str;
	set<char> s;
	for(int i=0;i<n;i++){
		if((int)str[i]>=97){
			str[i]-=32;
		}
		s.insert(str[i]);
	}
	if(s.size()==26) cout<<"YES\n";
	else cout<<"NO\n";
	return 0;
}
