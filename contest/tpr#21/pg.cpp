#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int>> v(1005);

int main(){
	ios_base::sync_with_stdio(0),cin.tie(0);
	int n,m,g,max=0;
	cin>>n>>m>>g;
	for(int i=0;i<n;i++){
		int j=0;
		cin>>v[i].first>>v[i].second;
		while(v[i].first<g){
			j++;
			v[i].first+=v[i].second;	
		}
		if(j>max) max=j;
	}
	cout<<max<<'\n';
	return 0;
}
