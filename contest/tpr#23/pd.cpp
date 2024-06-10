#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,x,y;
	long ans=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x>>y;
		ans+=(x*y);
	}
	cout<<ans<<'\n';
	return 0;
}
