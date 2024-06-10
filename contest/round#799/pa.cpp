#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0),cin.tie(0);
	int t;
	int a,temp,ans=0;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>a;
		ans=0;
		for(int j=0;j<3;j++){
			cin>>temp;
			if(temp>a) ans++;
		}
		cout<<ans<<'\n';
	}
	return 0;
}
