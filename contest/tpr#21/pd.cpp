#include<bits/stdc++.h>
using namespace std;

map<long long,int> m;

int main(){
	ios_base::sync_with_stdio(0),cin.tie(0);
	int n,temp,max=1;
	cin>>n;
	n*=2;
	for(int i=0;i<n;i++){
		cin>>temp;
		if(m.find(temp)!=m.end()){
			m[temp]++;
		}
		else{
			m.insert({temp,1});
		}
		if(m[temp]>max) max=m[temp];
	}
	//cout<<"max= "<<max<<'\n';
	if(max<=n/2) cout<<'0'<<'\n';
	else if(max==n) cout<<max/2<<'\n';
	else cout<<(2*max-n)/2<<'\n';
	return 0;
}
