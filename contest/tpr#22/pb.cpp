#include<bits/stdc++.h>
using namespace std;

vector<pair<long long,long long>> v;
long long a,b;
double ans=0,max=0;
int n,k;

int main(){
	ios_base::sync_with_stdio(0),cin.tie(0);
	int n,k;
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>a>>b;
		v.emplace_back(a,b);
	}
	
	return 0;
}
