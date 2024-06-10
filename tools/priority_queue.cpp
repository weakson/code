#include<bits/stdc++.h>
using namespace std;

int main(){
	priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q;
	for(int i=10,j=0;i>=0;i--,j++){
		q.push({i,j});
	}
	for(int i=0;i<=10;i++){
		cout<<(q.top()).first<<' '<<(q.top()).second<<'\n';
	}
}
