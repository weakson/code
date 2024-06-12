#include<bits\stdc++.h>
using namespace std;

int main(){
	string mode;
	long long int num1,num2;
	cout<<"<璸衡竟>\n"<<"匡拒家Α:a / b / c / d\n";
	cout<<"a =猭家Α\n"<<"b =癸计家Α\n"<<"c =猭家Α\n"<<"d =Ωよ家Α\n";
	while(cin>>mode){
		if(mode=="a"){
		cout<<"猭家Α\n"<<"块2计\n"<<"块0 0=>瞒秨家Α\n";
			while(cin>>num1>>num2){
				if(num1==0&&num2==0){
					cout<<"*瞒秨猭家Α*\n"<<"匡拒家Α:a / b / c / d\n";
					cout<<"a =猭家Α\n"<<"b =癸计家Α\n"<<"c =猭家Α\n"<<"d =Ωよ家Α\n";
					break;
				}
				cout<<num1<<"x"<<num2<<"="<<num1*num2<<'\n';
				cout<<"块2计\n"<<"块0 0=>瞒秨家Α\n";
			}
		}
		else if(mode=="b"){
			cout<<"癸计家Α\n"<<"块1计\n"<<"块0=>瞒秨家Α\n";
			while(cin>>num1){
				if(num1==0){
					cout<<"*瞒秨癸计家Α*\n"<<"匡拒家Α:a / b / c / d\n";
					cout<<"a =猭家Α\n"<<"b =癸计家Α\n"<<"c =猭家Α\n"<<"d =Ωよ家Α\n";
					break;
				}
				cout<<fixed<<setprecision(4)<<"log"<<num1<<"="<<log10(num1)<<'\n';
				cout<<"块1计\n"<<"块0=>瞒秨家Α\n";
			}
		}
		else if(mode=="c"){
			cout<<"猭家Α\n"<<"块1计\n"<<"块0=>瞒秨家Α\n";
			while(cin>>num1){
				if(num1==0){
					cout<<"*瞒秨猭家Α*\n"<<"匡拒家Α:a / b / c / d\n";
					cout<<"a =猭家Α\n"<<"b =癸计家Α\n"<<"c =猭家Α\n"<<"d =Ωよ家Α\n";
					break;
				}
				for(int m=1;m<=9;m++){
					cout<<num1<<"x"<<m<<"="<<m*num1<<'\n'; 
				}
				cout<<"块1计\n"<<"块0=>瞒秨家Α\n";
			}
		}
		else if(mode=="d"){
			cout<<"Ωよ家Α\n"<<"块2计\n"<<"块0 0=>瞒秨家Α\n";
			while(cin>>num1>>num2){
				if(num1==0&&num2==0){
					cout<<"*瞒秨Ωよ家Α*\n"<<"匡拒家Α:a / b / c / d\n";
					cout<<"a =猭家Α\n"<<"b =癸计家Α\n"<<"c =猭家Α\n"<<"d =Ωよ家Α\n";
					break;
				}
				cout<<num1<<"^"<<num2<<"="<<pow(num1,num2)<<'\n';
				cout<<"块2计\n"<<"块0 0=>瞒秨家Α\n"; 
			}
		}
	}
	return 0;
}
