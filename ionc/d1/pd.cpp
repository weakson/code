#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	string str;
	cin>>str;
	int n=str.size();
	for(int i=0;i<n;i++){
		if(str[i]=='-'){
			if(str[i+1]=='-'){
				cout<<2;
			}
			else{
				cout<<1;
			}
			i++;
		}
		else{
			cout<<0;
		}
	}
	cout<<'\n';
	return 0;
}
