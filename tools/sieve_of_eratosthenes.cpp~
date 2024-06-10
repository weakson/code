#include<iostream>
#include<vector>
using namespace std;

signed main(){
	long long n;
	cin>>n;
	vector<bool> v(n,1);
	for(long long i=2;i<=n;i++){
		if(v[i]) cout<<i<<' ';
		for(long long j=i;j<=n;j+=i){
			v[j]=0;
		}
	}
	cout<<'\n';
	return 0;
}
