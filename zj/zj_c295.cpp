#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0),cin.tie(0);
	int n,m;
	cin>>n>>m;
	vector<int> max(n,0);
	int s=0,temp;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>temp;
			if(temp>max[i]){
				max[i]=temp;
			}
		}
		s+=max[i];
	}
	cout<<s<<'\n';
	bool b=0;
	for(int i=0;i<n;i++){
		if(s%max[i]==0){
			if(b){
				cout<<' '<<max[i];
			}
			else{
				cout<<max[i];
				b=true;
			}
		}	
	}
	if(!b) cout<<"-1";
	cout<<'\n';
	return 0;
}
