#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0),cin.tie(0);
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		char v[8][8];
		pair<int,int> ans;
		for(int j=0;j<8;j++){
			for(int k=0;k<8;k++){
				cin>>v[j][k];
			}
		}
		for(int j=0;j<8;j++){
			for(int k=0;k<8;k++){
				if(v[j][k]=='#'){
					if(v[j-1][k-1]=='#' && v[j-1][k+1]=='#') ans.first=j+1,ans.second=k+1;
					else if(v[j+1][k-1]=='#' && v[j+1][k+1]=='#') ans.first=j+1,ans.second=k+1;
				}
			}
		}
		cout<<ans.first<<' '<<ans.second<<'\n';
	}
	return 0;
}
