#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0),cin.tie(0);
	unsigned long long n,x;
	cin>>n;
	if(n&1){
		x=n/2;
		x++;
		cout<<n%x<<'\n';
	}
	else{
		x=n/2+1;
		cout<<n%x<<'\n';
	}
	return 0;
}
