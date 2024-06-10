#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0),cin.tie(0);
	long n;
	unsigned long long temp,ans=0;
	vector<unsigned long long> v;
	cin>>n;
	cin>>temp;
	v.emplace_back(temp);
	for(int i=0;i<n-1;i++){
		cin>>temp;
		if(temp<v[i]){
		       	ans+=(v[i]-temp);
			v.emplace_back(v[i]);
		}
		else{
			v.emplace_back(temp);
		}
	}
	cout<<ans<<'\n';
	return 0;
}
