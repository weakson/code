#include<iostream>
#include<iomanip>
#include<math.h> 
using namespace std;

int main(){
	long long int a;
	cout<<"<log>\n"<<"��J���N��:";
	while(cin>>a){
		cout<<"log"<<a<<"="<<fixed<<setprecision(4)<<log10(a)<<'\n';
		cout<<"��J���N��:";
	}
	return 0;
}
