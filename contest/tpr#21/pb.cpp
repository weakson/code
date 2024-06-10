#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0),cin.tie(0);
	long long a,b,k;
	cin>>a>>b;
	int big;
	if(a>b) big=a;
        else big=b;
	for(int i=2;i<=big;i++){
		if(a%i==b%i){
			cout<<i<<'\n';
			return 0;
		}
	}	
	cout<<"-1"<<'\n';
	return 0;
}
