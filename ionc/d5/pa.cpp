#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	long long n;
	cin>>n;
	vector<long long> v(n+1,2);
	v[1]=1;
	for(int i=2;i<=n;i++){
		for(int j=2;j*j<=i;j++){
			if(i%j==0){
				if(i==j*j){
					v[i]*=2;
					v[i]--;
				}
				else{
					v[i]+=v[j];
				}
			}
		}
	}
	long long ans=0;
	for(int i=1;i<=n;i++){
		ans+=v[i];
	}
	cout<<ans<<'\n';
	return 0;
}
