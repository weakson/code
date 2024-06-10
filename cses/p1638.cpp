#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(0),cin.tie(0);
using namespace std;

int main(){
	fastio
	const int MAX=1e9+7;
	int n;
	cin>>n;
	cin.ignore();
	vector<string> v(n);
	vector<vector<long long>> dp(n);
	for(int i=0;i<n;i++) dp[i].resize(n);
	for(int i=0;i<n;i++){
		getline(cin,v[i]);
	}
	if(v[0][0]=='*'){
		cout<<0<<'\n';
		return 0;
	}
	dp[0][0]=1;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(v[i][j]=='*'){
				dp[i][j]=0;
			}
			else if(i==0 && j==0) continue;
			else{
				if(i-1<0) dp[i][j]=dp[i][j-1];
				else if(j-1<0) dp[i][j]=dp[i-1][j];
				else dp[i][j]=dp[i-1][j]+dp[i][j-1];
				dp[i][j]%=MAX;
			}
		}
	}
	cout<<dp[n-1][n-1]<<'\n';
	return 0;
}
