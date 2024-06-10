#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0),cin.tie(0);
	long long k;
	cin>>k;
	if(k<=10) cout<<k*100<<'\n';
	else if(k<=20) cout<<1000+(k-10)*200<<'\n';
	else cout<<3000+(k-20)*300<<'\n';
	return 0;
}
