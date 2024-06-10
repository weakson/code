#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0),cin.tie(0);
	long long n;
	cin>>n;
	vector<int> v(n+2,0);
	for(int i=2;i<n+2;i++){
		cin>>v[i];
	}
	int temp;
	for(int i=1;i<n+2;i++){
		if(v[i]%2==v[i-1]%2){
			if(v[i]<v[i-1]){
				temp=v[i];
				v[i]=v[i-1];
				v[i-1]=temp;
				i-=2;
			}
		}
	}
	for(int i=2;i<n+2;i++) cout<<v[i];
	cout<<'\n';
	return 0;
}
