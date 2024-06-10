#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	long max=(int)1e6;
	unsigned long long fib[max];
	fib[0]=1;
	fib[1]=1;
	for(int i=2;i<=max;i++){
		fib[i]=fib[i-1]+fib[i-2];
	}
	long q,temp;
	cin>>q;
	while(q--){
		cin>>temp;
		cout<<"Fibonacci sequence["<<temp<<"] is ";
		cout<<fib[temp]<<'\n';
	}
	return 0;
}
