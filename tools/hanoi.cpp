#include<bits/stdc++.h>
using namespace std;

void hanoi(int disc,string left,string middle,string right){
	if(disc==1){
		cout<<"Move ring "<<disc<<" from "<<left<<" to "<<right<<'\n';
		return;
	}
	hanoi(disc-1,left,right,middle);
	cout<<"Move ring "<<disc<<" from "<<left<<" to "<<right<<'\n';
	hanoi(disc-1,middle,left,right);
}

int main(){
	int num;
	while(cin>>num){
		hanoi(num,"left","middle","right");
		cout<<'\n';
	}
	return 0;
}
