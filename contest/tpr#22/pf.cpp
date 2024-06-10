#include<iostream>
using namespace std;

long candy[200005][20];
int n,m,ans=0;

/*
void search(int st,int nd,int tp){
	if(st==n-1&&nd==n) return;
	if((candy[st][tp]+candy[nd][tp])%2==0){
		if(tp==m-1){
			ans++;
			if(nd==n-1) search(st+1,st+2,0);
			else search(st,nd+1,0);
		}
		else search(st,nd,tp+1);		
	}
	else{
		if(nd==n-1) search(st+1,st+2,0);
		else search(st,nd+1,0);
	}
	return;
}
*/

int main(){
	ios_base::sync_with_stdio(0),cin.tie(0);
	
	cin>>n>>m;
	int temp;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>candy[i][j];
		}
	}

	//search(0,1,0);

	int st=1,nd=2,tp=1;
	
	while(st!=n){
	    if((candy[st][tp]+candy[nd][tp])%2==0){
			if(tp==m){
				ans++;
				if(nd==n) st++,nd=st+1,tp=0;
				else nd++,tp=0;
			}
			else tp++;
		}
		else{
			if(nd==n) st++,nd=st+1,tp=0;
			else nd++,tp=0;
		}
	}
	
	cout<<ans<<'\n';
	return 0;
}