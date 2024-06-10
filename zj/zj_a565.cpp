#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0),cin.tie(NULL);
	int num,make;
	stack<char> couple;
	string pp;
	cin>>num;
	for(int i=0;i<num;i++){
		make=0;
		couple.push('q');
		cin>>pp;
		for(int i=0;i<pp.size();i++){
			if(pp[i]=='.') continue;
			else if(pp[i]=='p') couple.push('p');
			else if(pp[i]=='q'){
				if(couple.top()=='p'){
					couple.pop();
					make+=1;
				}
				else couple.push('q');
			}
		}
		cout<<make<<'\n';
	}
	return 0;
}
