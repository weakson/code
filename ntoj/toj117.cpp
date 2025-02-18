#include <iostream>
using namespace std;

int main(){
	int a,b=0;
	int arr[1000];
	cin>>a;
	for(int i=0;i<a;i++){
		cin>>arr[i];
		if(b<=arr[i]){
			b=arr[i];
		}
	}
	cout<<b<<'\n';
	return 0;
}
