#include<bits/stdc++.h>
using namespace std;

int main(){
	long n;
	set<int> s;
	cin>>n;
	int temp;
	for(int i=1;i<=n;i++){
		s.insert(i);
	}
	for(int i=0;i<n-1;i++){
		cin>>temp;
		s.erase(temp);
	}
	cout<<*(s.begin())<<'\n';
	return 0;
}
