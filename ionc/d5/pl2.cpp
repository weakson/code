#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int n,k,c;
	cin>>n>>k>>c;
	vector<long long> dp(n+1,1e6),a(n+1);
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	dp[0]=1;
	for(int i=2;i<=n;i++){
		for(int j=1;j<i;j++){
			dp[i]=min(abs(a[i]-a[j])+c*(i-j-1),dp[i]);
		}
	}
	cout<<dp[n]<<'\n';
	return 0;
}
