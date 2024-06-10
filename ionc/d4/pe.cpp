#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	ll n;
	cin>>n;
	ll tmp=sqrt(n);
	ll ans=0;
	deque<ll> d;
	if(pow(tmp,2)==n){
		ans=tmp;
		for(ll i=1;i*i<=ans;i++){
			ll temp;
			if(ans%i==0){
				temp=1LL*i*i;
				cout<<temp<<' ';
				temp=1LL*pow(ans/i,2);
				d.emplace_front(pow(ans/i,2));
			}
		}
	}
	else{
		ll len=n/2;
		for(ll i=2;i*i<=len;i++){
			if(n%(i*i)==0) ans=i;
		}
		if(ans==0) cout<<1<<'\n';
		else{
			for(ll i=1;i*i<=ans;i++){
				ll temp;
				if(ans%i==0){
					temp=1LL*i*i;
					cout<<temp<<' ';
					temp=1LL*pow(ans/i,2);
					d.emplace_front(temp);
				}
			}
		}
	}
	for(auto it=d.begin();it!=d.end();it++) cout<<*it<<' ';
	cout<<'\n';
	return 0;
}
