#include<bits/stdc++.h>
using namespace std;

void hanoi(int disc,char left,char middle,char right){
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
		hanoi(num,'A','B','C');
		cout<<'\n';
	}
	return 0;
}
