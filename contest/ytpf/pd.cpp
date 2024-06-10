#include<bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0),cin.tie(0)

int main(){
	fastio;
	const int MAX=1e9+7;
	int n;
	cin>>n;
	vector<long long> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	long long ans=0;
	for(int i=0;i<n;i++){
		int t=0;
		ans++;
		for(int j=i+1;j<n;j++){
			if(abs(a[i]-a[j])<=2){
				t++;
			}
		}
		ans+=(t*(t+1))/2;
		ans%=MAX;
	}
	cout<<ans<<'\n';
	return 0;
}
