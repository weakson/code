#include<bits/stdc++.h>
using namespace std;

int main(){
	int mode,num,time;
	stack<int> stk;
	cin>>time;
	for(int i=0;i<time;i++){
		cin>>mode;
		if(mode==1){
			stk.pop();
		}
		else if(mode==2){
			cout<<stk.top()<<'\n';
		}
		else{
			cin>>num;
			stk.push(num);
		}
	}
	return 0;

}
