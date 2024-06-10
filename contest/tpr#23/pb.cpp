#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0),cin.tie(0);
	long long n;
	cin>>n;
	if(n&1) cout<<n/2+1<<'\n';
	else cout<<n/2<<'\n';
	return 0;
}
