#include<bits/stdc++.h>
using namespace std;

stack<int> station;
queue<int> train;

int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int num,car;
	bool can,out;
	while(cin>>num){
		if(num==0) break;
		while(1){
			out=0;
			can=1;
			while(!station.empty()) station.pop();
			while(!train.empty()) train.pop();
			for(int i=1;i<=num;i++) train.push(i);
			for(int i=1;i<=num;i++){
				cin>>car;
				if(car==0){
				       	out=1;
					break;
				}
				while(station.empty() || station.top()!=car){
					if(train.empty()){
						can=0;
						break;
					}
					else{
						station.push(train.front());
						train.pop();
					}
				}
				if(can) station.pop();
			}
			if(out) break;
			else if(can) cout<<"Yes\n";
			else cout<<"No\n";
		}
		cout<<'\n';
	}
}
