#include<bits\stdc++.h>
using namespace std;

int main(){
	string mode;
	long long int num1,num2;
	cout<<"<�p�⾹>\n"<<"��ܼҦ�:a / b / c / d\n";
	cout<<"a =���k�Ҧ�\n"<<"b =��ƼҦ�\n"<<"c =���k��Ҧ�\n"<<"d =����Ҧ�\n";
	while(cin>>mode){
		if(mode=="a"){
		cout<<"���k�Ҧ�\n"<<"��J2�ӼƦr\n"<<"��J0 0=>���}���Ҧ�\n";
			while(cin>>num1>>num2){
				if(num1==0&&num2==0){
					cout<<"*���}���k�Ҧ�*\n"<<"��ܼҦ�:a / b / c / d\n";
					cout<<"a =���k�Ҧ�\n"<<"b =��ƼҦ�\n"<<"c =���k��Ҧ�\n"<<"d =����Ҧ�\n";
					break;
				}
				cout<<num1<<"x"<<num2<<"="<<num1*num2<<'\n';
				cout<<"��J2�ӼƦr\n"<<"��J0 0=>���}���Ҧ�\n";
			}
		}
		else if(mode=="b"){
			cout<<"��ƼҦ�\n"<<"��J1�ӼƦr\n"<<"��J0=>���}���Ҧ�\n";
			while(cin>>num1){
				if(num1==0){
					cout<<"*���}��ƼҦ�*\n"<<"��ܼҦ�:a / b / c / d\n";
					cout<<"a =���k�Ҧ�\n"<<"b =��ƼҦ�\n"<<"c =���k��Ҧ�\n"<<"d =����Ҧ�\n";
					break;
				}
				cout<<fixed<<setprecision(4)<<"log"<<num1<<"="<<log10(num1)<<'\n';
				cout<<"��J1�ӼƦr\n"<<"��J0=>���}���Ҧ�\n";
			}
		}
		else if(mode=="c"){
			cout<<"���k��Ҧ�\n"<<"��J1�ӼƦr\n"<<"��J0=>���}���Ҧ�\n";
			while(cin>>num1){
				if(num1==0){
					cout<<"*���}���k��Ҧ�*\n"<<"��ܼҦ�:a / b / c / d\n";
					cout<<"a =���k�Ҧ�\n"<<"b =��ƼҦ�\n"<<"c =���k��Ҧ�\n"<<"d =����Ҧ�\n";
					break;
				}
				for(int m=1;m<=9;m++){
					cout<<num1<<"x"<<m<<"="<<m*num1<<'\n'; 
				}
				cout<<"��J1�ӼƦr\n"<<"��J0=>���}���Ҧ�\n";
			}
		}
		else if(mode=="d"){
			cout<<"����Ҧ�\n"<<"��J2�ӼƦr\n"<<"��J0 0=>���}���Ҧ�\n";
			while(cin>>num1>>num2){
				if(num1==0&&num2==0){
					cout<<"*���}����Ҧ�*\n"<<"��ܼҦ�:a / b / c / d\n";
					cout<<"a =���k�Ҧ�\n"<<"b =��ƼҦ�\n"<<"c =���k��Ҧ�\n"<<"d =����Ҧ�\n";
					break;
				}
				cout<<num1<<"^"<<num2<<"="<<pow(num1,num2)<<'\n';
				cout<<"��J2�ӼƦr\n"<<"��J0 0=>���}���Ҧ�\n"; 
			}
		}
	}
	return 0;
}
