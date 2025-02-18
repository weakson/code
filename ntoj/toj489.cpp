#include<bits/stdc++.h>
#define ll long long
#define fastio ios_base::sync_with_stdio(0),cin.tie(0);
using namespace std;

int main(){
	fastio
	long n,k;
	cin>>n>>k;
	vector<ll> dp(n+1,0);
	ll a[n+1],temp=1,sum=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		sum+=a[i];
		if(i<k) dp[i]=0;
		else if(i==k){
			dp[i]=sum;
			sum-=a[temp];
			temp++;
		}
		else{
			dp[i]=max(dp[i-1],dp[i-k-1]+sum);
			sum-=a[temp];
			temp++;	
		}
	}
	cout<<dp[n]<<'\n';
	return 0;
}
