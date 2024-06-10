#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
	ios_base::sync_with_stdio(0),cin.tie(0);
	int n,ans=0,num,temp;
	cin>>n;
	set<int> s;	
	for(int i=0;i<n;i++){
		cin>>num>>temp;
		if(temp>100){
			s.insert(num);
			ans+=(temp-100)*5;	
		}
	}
	if(!s.empty()){
		for(auto it=s.begin();it!=s.end();it++) cout<<*it<<' ';
		cout<<'\n';
	}
	cout<<ans<<'\n';
	return 0;
}
