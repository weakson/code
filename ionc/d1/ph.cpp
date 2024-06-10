#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int t=2;
	if(n&1){
		cout<<1<<'\n';
		return 0;
	}
	while(1){
		if(t%n==0){
			cout<<t%n-1<<'\n';
			break;
		}
	}
}
