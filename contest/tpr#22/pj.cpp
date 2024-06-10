#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0),cin.tie(0);
	int n,sum=0,max=0;
	cin>>n;
	long long a[n]={};
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<4;i++) sum+=a[i];
	max=sum;
	if(n<=4){
		//cout<<"running on first one.\n";
		for(int i=0;i<n;i++){
			sum-=a[i];
			if(sum>max) max=sum;
		}
	}
	else{
		//cout<<"running on second one.\n";
		for(int i=4;i<n;i++){
			sum-=a[i-4];
			sum+=a[i];
			if(sum>max) max=sum;
		}
	}
	cout<<max<<'\n';
	return 0;
}
