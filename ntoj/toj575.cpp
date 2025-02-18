#include<bits/stdc++.h>
using namespace std;

vector<int> f[1000005];

int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int qusline,ansline,a,b;
	cin>>ansline>>qusline;
	for(int i=1;i<=qusline;i++){
		cin>>a>>b;
		f[a].emplace_back(b);
		f[b].emplace_back(a);
	}
	for(int i=1;i<=ansline;i++){
		sort(f[i].begin(),f[i].end());
		for(int j=0;j<f[i].size();j++){
			cout<<f[i][j]<<' ';
		}
		cout<<'\n';
	}
	return 0;

}
