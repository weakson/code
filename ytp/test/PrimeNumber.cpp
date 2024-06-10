#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int n;
	cin>>n;
	bool b=0;
	for(int i=2;i*i<=n;i++){
		if(n%i==0){
			b=1;
			break;	
		}
	}
	cout<<n<<' ';
	for(int i=n-1;i>0;i--){
		bool is=0;
		for(int j=2;j*j<=i;j++){
			if(i%j==0){
				if(b) cout<<i<<' ';
				is=1;
				break;
			}
		}
		if(!is && !b && i!=1) cout<<i<<' ';
		if(i==1 && b){
			cout<<1<<' ';	
		}
	}
	cout<<'\n';
}
