#include<iostream>
#include<iomanip>
#include<math.h> 
using namespace std;

int main(){
	long long int a;
	cout<<"<log>\n"<<"輸入任意數:";
	while(cin>>a){
		cout<<"log"<<a<<"="<<fixed<<setprecision(4)<<log10(a)<<'\n';
		cout<<"輸入任意數:";
	}
	return 0;
}
