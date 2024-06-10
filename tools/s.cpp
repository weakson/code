#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0),cin.tie(0);
	int n;
	set<string> s;
	cin>>n;
	string temp;
	bool is_perfect=0;
	for(int i=0;i<n;i++){
		cin>>temp;
		if(!s.insert(temp).second){
			is_perfect=0;
			break;
		}
		else{
			is_perfect=1;
		}
	}
	if(is_perfect){
		cout<<"Yes\n";
	}
	else{
		cout<<"No\n";
	}
	return 0;
}
