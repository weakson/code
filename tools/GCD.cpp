#include <iostream>
using namespace std;

int GCD(int a,int b){
	if(a%b==0){
		return b;
	}
	else{
		return GCD(b,a%b);
	}
}

int main(){
	int a,b,c;
	scanf("%d %d",&a,&b);
	c=GCD(a,b);
	printf("%d",c);
	return 0;
}
