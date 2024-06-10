#include<bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0),cin.tie(0)

int main(){
	fastio;
	int n;
	cin>>n;
	vector<long> a(n),dp(n+1,0);
	queue<int> q;
	int health=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]<0) q.push(a[i]);
		health+=a[i];
		dp[i+1]=dp[i]++;
		while(health<0){
			health-=q.front();
			q.pop();
			dp[i+1]--;
		}
	}
	cout<<dp[n]<<'\n';
	return 0;
}
