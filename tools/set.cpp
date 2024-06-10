#include<bits/stdc++.h>
using namespace std;

int main(){
	set<int> s;
	s.insert(34);
	s.insert(23);
	s.insert(83);
	s.insert(14);
	s.insert(53);
	s.insert(78);
	s.insert(68);
	for(int i:s) cout<<i<<' ';
	cout<<'\n';
	cout<<ceil((float)s.size()/2)<<'\n';
	int length=ceil((float)s.size()/2);
	auto it=s.begin();
	for(int i=1;i<length;i++){
		it++;
	}
	cout<<"it= "<<*it;
	return 0;
}
