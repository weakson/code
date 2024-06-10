#include<bits/stdc++.h>
using namespace std;

multiset<pair<int,int>,greater<pair<int,int>>> s;
int test,num,learn,a,b;

int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	cin>>test;
	for(int i=0;i<test;i++){
		cin>>num>>learn;
		for(int j=0;j<num;j++){
			cin>>a>>b;
			s.insert(make_pair(a,b));
		}
		while(s.size()!=learn) s.erase(s.begin());
		int ans=(*s.begin()).first,temp=(*s.begin()).second;
		for(auto it=s.begin();it!=s.end();it++){
			if((*it).second>temp) temp=(*it).second;
		}
		ans+=temp;
		cout<<ans<<'\n';
	}
	return 0;
}