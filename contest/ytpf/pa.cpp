#include<bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0),cin.tie(0)

int main(){
	fastio;
	multiset<string> s;
	string n,m;
	getline(cin,n);
	getline(cin,m);
	int h=0,len1,len2,t;
	len1=n.size();
	len2=m.size();
	t=len1;
	while(t<=len2){
		//cout<<"h= "<<h<<'\n';
		//cout<<"t= "<<t<<'\n';
		int ans=0,p=len1-1;
		string tmp="";
		for(int i=h,j=0;i<t;i++,j++){
			if(n[j]==m[i]){
				ans++;
			}
			tmp+=m[i];
		}	
		if(ans>=p){
			s.insert(tmp);
		}
		h++;
		t++;
	}
	//cout<<s.size()<<'\n';
	if(s.empty()) cout<<"Not found\n";
	for(auto it=s.begin();it!=s.end();it++){
		cout<<*it<<'\n';
	}
	return 0;
}
