#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0),cin.tie(0);
	int n;
	cin>>n;
	vector<string> v(n);
	int max=0;
	for(int i=0;i<n;i++){
		cin>>v[i];
		if(v[i].size()>max) max=v[i].size();
	}
	for(int i=0;i<max;i++){
		for(int j=0;j<n;j++){
			if(i>v[j].size()) continue;
			if((int)v[j][i]>57){
				cout<<v[j][i];	
			}	
		}
	}	
	cout<<'\n';
	return 0;
}
