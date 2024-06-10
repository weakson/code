#include<bits/stdc++.h>
#include<unordered_map>
#define ll long long
using namespace std;

int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int n;
	cin>>n;
	int z[3][100001],ans[n];
	tuple<ll,ll,ll> temp,intemp;
	map<tuple<ll,ll,ll>,int> m;
	long a,b,c;
	for(int i=0;i<n;i++){
		cin>>z[0][i]>>z[1][i]>>z[2][i];
		for(int j=0;j<i;j++){
			if(z[0][i]+z[0][j]==z[1][i]+z[1][j]){
				if(z[1][i]+z[1][j]==z[2][i]+z[2][j]){
					ans[j]++;
					ans[i]++;
				}
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<ans[i]<<' ';
	}
	cout<<'\n';
	return 0;
}
