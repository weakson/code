#include<iostream>
using namespace std;

int high,wide;
unsigned long long ans=0;
int v[25][25]={};

void path(int x,int y){
	ans+=v[x][y];
	if(v[x][y+1]>=v[x+1][y]){
		if(x<=high&&y+1<=wide){
			path(x,y+1);
		}
	}
	else{
		if(x+1<=high&&y<=wide){
			path(x+1,y);
		}
	}
	return;
}

int main(){
	ios_base::sync_with_stdio(0),cin.tie(0);
	cin>>high>>wide;
	for(int i=1;i<=high;i++){
		for(int j=1;j<=wide;j++){
			cin>>v[i][j];		
		}
	}
	if(high==1){
		for(int i=1;i<=wide;i++){
			ans+=v[1][i];
		}
	}
	else{
		path(1,1);
	}
	cout<<ans<<'\n';
	return 0;
}
