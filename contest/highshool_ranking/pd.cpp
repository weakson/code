#include<bits/stdc++.h>
using namespace std;

vector<long long> v;

bool cmp(int a,int b){
	return a>b;
}

int main(){
	ios_base::sync_with_stdio(0),cin.tie(0);
	long long n,temp;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>temp;
		v.emplace_back(temp);
	}
	sort(v.begin(),v.end(),cmp);
	long long ans=0;
	//for(int i=0;i<n;i++) cout<<v[i]<<' ';
	//cout<<'\n';
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(i%2==0){
				if(j%2!=0) ans+=(v[i]+v[j]);
				else ans+=(v[i]-v[j]);
			}
			else{
				if(j%2==0) ans+=(v[i]+v[j]);
				else ans+=(v[i]-v[j]);
			}
			//cout<<"i= "<<i<<' '<<"j= "<<j<<' ';
			//cout<<"ans= "<<ans<<"\n";
		}
	}
	cout<<ans<<'\n';
	return 0;
}
