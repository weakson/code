#include<bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0),cin.tie(0)

vector<long long> v(8);

int main(){
	fastio;
	long long n,m;
	cin>>n>>m;
	bool burn_chickened=0;
	int tmp[7];
	v[0]=0;
	for(int i=0;i<7;i++){
		cin>>tmp[i];
	}
	for(int i=6,j=1;i>=0;i--,j++){
		v[j]=v[j-1]+tmp[i];
	}
	long long w,d;
	for(int i=0;i<m;i++){
		for(int j=1;j<=7;j++){
			if(v[7]*i+v[j]>=n){
				burn_chickened=1;
				w=m-i;
				d=8-j;
				break;
			}
		}
		if(burn_chickened) break;
	}
	if(burn_chickened){
		cout<<w<<' '<<d<<'\n';
	}
	else cout<<-1<<'\n';
	return 0;
}
