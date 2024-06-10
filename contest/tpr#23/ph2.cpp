#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0),cin.tie(0);
	int n,m,temp;
	cin>>n>>m;
		
	vector<vector<long>> s(n);
	
	for(int i=0;i<n;i++) {
		s[i].resize(m);
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin >> temp;
			
			/*
			s[i][j] =  (i== 0 ?    0: s[i-1][j])+ 
			         (j== 0 ?    0: s[i][j-1]) - 
			         (i==0 || j==0 ? 0:s[i-1][j-1]) + temp
			;
			*/

			s[i][j]+=temp;
			if(i!=0) s[i][j]+=s[i-1][j];
			if(j!=0) s[i][j]+=s[i][j-1];
			if(i!=0 && j!=0) s[i][j]+=s[i-1][j-1];
		}
	}

	// cout<<'\n';
	// for(int i=0; i<m ; i++) {
	// 	for (int j= 0; j<n ; j++) cout<<s[i][j];
	// 	cout<<'\n';
	// }
	 
	int q,xa,xb,ya,yb;
	cin >> q;
	while(q --){
		cin>>xa>>ya>>xb>>yb;
		long ans=s[xb][yb];
		
		if (xa != 0) ans -= s[xa - 1][yb];
		if (ya != 0) ans -= s[xb][ya - 1];
		if (xa != 0 && ya != 0) ans +=  s[xa - 1][ya - 1];
		
		cout<<ans<<'\n';
	}
	return 0;
}
