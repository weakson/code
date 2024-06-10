#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0),cin.tie(0);
	long n;
	cin>>n;
	long long temp;
	vector<long long> sum(n+1,0);
	int q,l,r;
	for(int i=1;i<=n;i++){
		cin>>temp;
		sum[i]=sum[i-1]+temp;
	}
	cin>>q;
	for(int i=0;i<q;i++){
		cin>>l>>r;
		cout<<sum[r]-sum[l-1]<<'\n';
	}
	return 0;
}
