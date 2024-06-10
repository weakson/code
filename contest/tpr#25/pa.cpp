#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	long long n,x,temp,ans=0;
	vector<long long> v;
	cin>>n>>x;
	for(int i=0;i<n;i++){
		cin>>temp;
		if(temp%x==0) ans++;
		else{
			if(ans!=0){
				v.emplace_back(ans);
				ans=0;
			}	
		}	
	}
	if(ans!=0) v.emplace_back(ans);
	long long a=0;
	for(int i=0;i<v.size();i++){
		if(v[i]!=0){
			a+=((1+v[i])*v[i])/2;	
		}
	}
	cout<<a<<'\n';
	return 0;
}
