#include<iostream>
using namespace std;


int f(int n){
	if(n >= 101){
		return n-10;
	}
	else{
		return f(f(n+11));
	}
}

int main(){
	int N;
	while(cin >> N){
		if(N == 0){
			break;
		}
		int ans = f(N);
		cout <<"f91("<< N << ") = " << ans << '\n';
	}
	return 0;
}
