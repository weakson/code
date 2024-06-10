#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	long n;
	cin>>n;
	deque<long> d;
	while(n!=0){
		d.emplace_front(n);
		d.emplace_front(d.back());
		d.pop_back();
		n--;
	}
	for(auto it=d.begin();it!=d.end();it++){
		cout<<*it<<' ';
	}
	cout<<'\n';
	return 0;
}
