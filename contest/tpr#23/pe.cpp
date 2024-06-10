#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0),cin.tie(0);
	long long n,temp;
	map<long long,long long> m;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>temp;
		if(m.find(temp)!=m.end()) m[temp]++;
		else m.insert({temp,1});
	}
	long long ansa=0,ansb=0;
	for(auto it=m.begin();it!=m.end();it++){
		if(it->second>=15) ansb++;
		if(it->second>=10) ansa++;
	}
	cout<<ansa<<' '<<ansb<<'\n';
	return 0;
}
