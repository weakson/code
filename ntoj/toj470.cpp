#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	long n;
	while(cin>>n){
		ll dp[n];
		ll temp;
		cin>>temp;
		dp[0]=max((ll)0,temp);
		for(int i=1;i<n;i++){
			cin>>temp;
			if(i==1){
				dp[i]=max(dp[0],temp);
				continue;
			}
			dp[i]=max(dp[i-1],dp[i-2]+temp);
		}
		cout<<dp[n-1]<<'\n';
	}
	return 0;
}
