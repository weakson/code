#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0),cin.tie(0);
	int n,m;
	cin>>n>>m;
	long long ans=0;
	ans+=n*20;
	ans+=m*35;
	cout<<ans<<'\n';
	return 0;
}
