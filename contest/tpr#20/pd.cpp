#include<iostream>
using namespace std;

int high,wide;
long long ans=0;
int v[6][5005]={};

void path(int x,int y){
	if(x>high || y>wide) return;
	if(v[x][y+1]>=v[x+1][y]){
		ans+=v[x][y+1];
		path(x,y+1);
	}
	else{
		ans+=v[x+1][y];
		path(x+1,y);
	}
	return;
}

int main(){
	ios_base::sync_with_stdio(0),cin.tie(0);
	cin>>wide;
	for(int i=1;i<=3;i++){
		for(int j=1;j<=wide;j++){
			cin>>v[i][j];		
		}
	}
	path(1,1);
	cout<<ans<<'\n';
	return 0;
}
