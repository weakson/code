#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	long l,r;
	char k;
	cin>>l>>r>>k;
	long ans=0;
	for(int i=l;i<=r;i++){
		stringstream ss;
		ss<<i;
		string str;
		ss>>str;
		int len=str.size();
		for(int j=0;j<len;j++){
			if(str[j]==k) ans++;
		}
	}
	cout<<ans<<'\n';
	return 0;
}
