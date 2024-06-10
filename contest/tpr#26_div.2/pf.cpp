#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int n,q;
	cin>>n>>q;
	map<long,long> m;
	long long sum[n+1][100001];
	int temp;
	for(int i=1;i<=n;i++){
		cin>>temp;
		m[temp]++;
		sum[i][temp]=m[temp];
	}
	int l,r,k;
	while(q--){
		cin>>l>>r>>k;
		if(l-1==0) cout<<sum[r][k]<<'\n';
		else cout<<sum[r][k]-sum[l-1][k]<<'\n';
	}
	return 0;
}
