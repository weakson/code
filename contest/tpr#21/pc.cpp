#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0),cin.tie(0);
	int t,n,per[100005],sum=0;
	double ans;
	cin>>t>>n;
	for(int i=0;i<n;i++){
		cin>>per[i];
		sum+=per[i];
	}
	double persent=(double)t/sum;
	//cout<<persent<<'\n';
	for(int i=0;i<n;i++){
		ans=per[i]*persent;
		//printf("%.1f ",ans);
		cout<<fixed<<setprecision(1)<<ans<<' ';
	}
	cout<<'\n';
	return 0;
}
