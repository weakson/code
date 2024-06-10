#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0),cin.tie(0);
	long long n,c,t,ka,kb,kc,ans=0,scope;
	cin>>n>>c>>t>>ka>>kb>>kc;
	map<long long,long long> m;
	m.insert({ka,t});
	m.insert({kb,t});
	m.insert({kb,t});
	if(kb>ka) swap(ka,kb);
	cout<<n+ans<<'\n';
	return 0;
}
