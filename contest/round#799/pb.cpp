#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0),cin.tie(0);
	int test,n,tmp;
	cin>>test;
	for(int i=0;i<test;i++){
		cin>>n;
		map<int,int> m;
		for(int j=0;j<n;j++){
			cin>>tmp;
			if(m.find(tmp)==m.end()) m.insert({tmp,1});
			else m[tmp]++;
			if(m[tmp]>2) m[tmp]-=2;
		}
		int ans=0;
		for(auto it=m.begin();it!=m.end();it++){
			if(it->second==2) ans++; 
		}
		if(ans&1) cout<<m.size()-1<<'\n';
		else cout<<m.size()<<'\n';
	}
	return 0;
}
