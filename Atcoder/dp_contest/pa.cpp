#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0),cin.tie(0);
	int n;
	cin>>n;
	vector<int> a(n),dp(n,1e9);

	for(int i=0 ;i< n;i++){
		cin>>a[i];
	}
	
	dp[0]=0,
	dp[1]=abs(a[1] - a[0]);
	
	for(int i=2;i<n;i++){
		dp[i]=min(
				dp[i-2] + abs(a[i]-a[i-2]), 
				dp[i-1] + abs(a[i]-a[i-1])
			 );
	}
	
	cout<<dp[n-1]<<'\n';
	return 0;
}
