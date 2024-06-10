#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int n;
	string s;
	stack<char> stk;
	cin>>n;
	cin>>s;
	stk.push(s[0]);
	for(int i=1;i<n;i++){
		if(!stk.empty() && stk.top()!=s[i]){
			stk.pop();
			continue;
		}
		stk.push(s[i]);
	}
	cout<<stk.size()<<'\n';
	return 0;
}
