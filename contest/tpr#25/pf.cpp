#include<bits/stdc++.h>
using namespace std;

int main(){
	//ios::sync_with_stdio(0),cin.tie(0);
	stack<string> stk;
	int n;
	cin>>n;
	cin.ignore();
	bool legal=1;
	for(int i=0;i<n;i++){
		if(!stk.empty()) cout<<"top= "<<stk.top()<<'\n';
		string s;
		getline(cin,s);
		if(s[0]!='<' || (s[0]=='<' && s[s.size()-2]=='/') ) continue;
		else if(s[1]=='/'){
			if((s.size()-1)!=stk.size()){
			       	legal=0;
			}
			int j=1;
			while(s[j+1]!='>'){
				if(s[j+1]!=stk.top()[j]){
					legal=0;
					break;
				}
				j++;
			}
			stk.pop();
			cout<<"pop\n";	
		}
		else stk.push(s);
	}
	if(!stk.empty()) legal=0;
	if(legal) cout<<"YES\n";
	else cout<<"NO\n";
	return 0;
}
