#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	string s;
	cin>>n;
	cin>>s;
	int sum=0;
	for(int i=0;i<n;i++){
		if(s[i]=='A') sum--;
		else sum++;
	}
	if(sum==0) cout<<"Friendship\n";
	else if(sum>0) cout<<"Danik\n";
	else cout<<"Anton\n";
	return 0;
}
