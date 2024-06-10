#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	long long n,m;
	cin>>n>>m;
	int a,b;
	for(int i=0;i<m;i++){
		cin>>a>>b;
	}
	//const long long mod=1e9+7;
	long long ans=0;
	ans=200*m+100*n*n;
	//ans%=mod;
	cout<<ans<<'\n';
	return 0;
}
