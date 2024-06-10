#include<iostream>
#include<algorithm>
#define ll long long
using namespace std;

int main(){
	ios_base::sync_with_stdio(0),cin.tie(0);
	long  n,a,b,c;
	cin>>n;
    cin>>a>>b>>c;
	ll dp[3][n];
	dp[0][0]=a;
	dp[1][0]=b;
	dp[2][0]=c;
	for(int i=1;i<n;i++){
		cin>>a>>b>>c;
		dp[0][i]=max(dp[1][i-1],dp[2][i-1])+a;
		dp[1][i]=max(dp[0][i-1],dp[2][i-1])+b;
		dp[2][i]=max(dp[0][i-1],dp[1][i-1])+c;
	}
	ll ans=0;
	ans=max({dp[0][n-1],dp[1][n-1],dp[2][n-1]});
	cout<<ans<<'\n';
	return 0;
}
