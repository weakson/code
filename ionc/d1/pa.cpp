#include<bits/stdc++.h>
using namespace std;

bool is_found=0;
deque<long long> d;

bool f(long long a,long b){
	if(a==b){
		is_found=1;	
		return 1;
	}
	else if(a>b) return 0;
	if(f(a*2,b)){
		d.emplace_front(a*2);
	}
	else if(f(a*10+1,b)){
		d.emplace_front(a*10+1);
	}
	if(!is_found) return 0;
	else return 1;
}

int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	long long a,b;
	cin>>a>>b;
	f(a,b);
	d.emplace_front(a);
	if(is_found){
		cout<<"YES\n";
		cout<<d.size()<<'\n';
		for(auto it=d.begin();it!=d.end();it++){
			cout<<*it<<' ';
		}
		cout<<'\n';
	}
	else cout<<"NO\n";
	return 0;
}
