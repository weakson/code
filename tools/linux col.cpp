#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

int main(){
	string mode;
	int num1,num2;
	cout<<"<計算器>\n"<<"選擇模式:a / b / c / d\n";
	cout<<"a =乘法模式\n"<<"b =對數模式\n"<<"c =乘法表模式\n"<<"d =次方模式\n";
	while(cin>>mode){
		if(mode=="a"){
		cout<<"乘法模式\n"<<"輸入2個數字\n"<<"輸入0 0=>離開此模式\n";
			while(cin>>num1>>num2){
				if(num1==0&&num2==0){
					cout<<"*離開乘法模式*\n"<<"選擇模式:a / b / c / d\n";
					cout<<"a =乘法模式\n"<<"b =對數模式\n"<<"c =乘法表模式\n"<<"d =次方模式\n";
					break;
				}
				cout<<num1<<"x"<<num2<<"="<<num1*num2<<'\n';
				cout<<"輸入2個數字\n"<<"輸入0 0=>離開此模式\n";
			}
		}
		else if(mode=="b"){
			cout<<"對數模式\n"<<"輸入1個數字\n"<<"輸入0=>離開此模式\n";
			while(cin>>num1){
				if(num1==0){
					cout<<"*離開對數模式*\n"<<"選擇模式:a / b / c / d\n";
					cout<<"a =乘法模式\n"<<"b =對數模式\n"<<"c =乘法表模式\n"<<"d =次方模式\n";
					break;
				}
				cout<<fixed<<setprecision(4)<<"log"<<num1<<"="<<log10(num1)<<'\n';
				cout<<"輸入1個數字\n"<<"輸入0=>離開此模式\n";
			}
		}
		else if(mode=="c"){
			cout<<"乘法表模式\n"<<"輸入1個數字\n"<<"輸入0=>離開此模式\n";
			while(cin>>num1){
				if(num1==0){
					cout<<"*離開乘法表模式*\n"<<"選擇模式:a / b / c / d\n";
					cout<<"a =乘法模式\n"<<"b =對數模式\n"<<"c =乘法表模式\n"<<"d =次方模式\n";
					break;
				}
				for(int m=1;m<=9;m++){
					cout<<num1<<"x"<<m<<"="<<m*num1<<'\n'; 
				}
				cout<<"輸入1個數字\n"<<"輸入0=>離開此模式\n";
			}
		}
		else if(mode=="d"){
			cout<<"次方模式\n"<<"輸入2個數字\n"<<"輸入0 0=>離開此模式\n";
			while(cin>>num1>>num2){
				if(num1==0&&num2==0){
					cout<<"*離開次方模式*\n"<<"選擇模式:a / b / c / d\n";
					cout<<"a =乘法模式\n"<<"b =對數模式\n"<<"c =乘法表模式\n"<<"d =次方模式\n";
					break;
				}
				cout<<num1<<"^"<<num2<<"="<<pow(num1,num2)<<'\n';
				cout<<"輸入2個數字\n"<<"輸入0 0=>離開此模式\n"; 
			}
		}
	}
	return 0;
}
