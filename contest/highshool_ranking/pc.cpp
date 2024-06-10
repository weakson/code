#include<bits/stdc++.h>
using namespace std;

long n,l,pos;
long long e;

int main(){
	ios_base::sync_with_stdio(0),cin.tie(0);
	cin>>n>>l>>e;
	vector<long long> v(n);
	for(int j=0;j<n;j++){
		cin>>pos;
		pos--;
		v[pos]=e;
		long i=pos+1;
		long long temp=e-1;
		while(temp!=0&&i<n&&i>0){
			if(temp>v[i]) v[i]=temp;
			else break;
			i++;
		}
		temp=e-1;
		i=pos-1;
		while(temp!=0&&i<n&&i>0){
			if(temp>v[i]) v[i]=temp;
			else break;
			i--;
		}
	}
	sort(v.begin(),v.end());
	cout<<*v.begin()<<'\n';
	return 0;

}
