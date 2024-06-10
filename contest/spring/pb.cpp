#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll f(ll n){
	if(n==1) return 0;
	ll total=1;
	while(total<n) total=total*3;
	ll g=total/3;
	ll prev=n%g;
	if(n%g==0) prev=total/3;
	if(n>g*2) return f(prev)+2;
	else if(n>g) return f(prev)+1;
	else return f(prev);
}

int main(){
	ll n;
	cin>>n;
	ll ans;
	ans=f(n);
	cout<<ans<<'\n';
	return 0;
}
