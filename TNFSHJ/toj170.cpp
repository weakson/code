#include <iostream>
using namespace std;

void A(int a){
	for(int i=1;i<=a;i++){
		for(int j=a-i;j>=0;j--){
			cout<<" ";
		}
		for(int k=0;k<(2*i)-1;k++){
			cout<<"*";
		}
		cout<<'\n';
	}
}

void B(int a){
	int b=2;
	for(int l=0;l<(2*a);l++){
		while(b>0){
			for(int i=1;i<=a;i++){
				for(int j=a-i;j>=0;j--){
					cout<<" ";
				}
				for(int k=0;k<(2*i)-1;k++){
					cout<<"*";
				}
				cout<<"\n";
			}
			b--;
		}
	}
}

void C(int a){
	for(int i=1;i<=a;i++){
		for(int j=1;j<=i;j++){
			for(int k=1;k<=a-j;k++){
				cout<<" ";
			}
			for(int k=1;k<=(2*j)-1;k++){
				cout<<"*";
			}
			cout<<'\n';
		}
	}
}

void E(int a){
	for(int i=1;i<=a;i++){
		for(int j=a-i+1;j>=0;j--){
			cout<<" ";
		}
		for(int k=0;k<(2*i)-1;k++){
			cout<<"*";
		}
		cout<<"\n";
	}
	for(int i=0;i<(2*a)+3;i++){
		cout<<"#";
	}
	cout<<'\n';
}

int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int a,c;
	char b;
	cin>>a;
	for(int i=0;i<a;i++){
		cin>>b>>c;
		if(b=='A'){
			A(c);
		}
		else if(b=='B'){
			B(c);
		}
		else if(b=='C'){
			C(c);
		}
		else if(b=='D'){
			A(c*10);
		}
		else if(b=='E'){
			E(c);
		}
		else if(b=='F'){
			A(c*2);
		}
		else if(b=='G'){
			A(c*3);
		}
		else if(b=='H'){
			A(c*7);
		}
		else if(b=='I'){
			A((c*4)-1);
		}
		cout<<'\n';
	}
	return 0;
}
