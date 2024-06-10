#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0),cin.tie(0);
	long long q,n,t;
	cin>>q;
	for(int i=0;i<q;i++){
		cin>>n>>t;
		long long max=0;
		for(int j=n;j>=n-3;j--){
			max+=j;
		}
		if(t>=10 && t<=max) cout<<"Yes\n";
		else cout<<"No\n";
	}
	return 0;
}
