#include<iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a,b,c,d,e;
	int arr[2000];
	string flag="true";
	cin>>a;
	for(int i=0;i<a;i++){
		cin>>arr[i];
	}
	cin>>b;
	for(int i=0;i<b;i++){
		cin>>c>>d;
		c--;
		d--;
		if(flag=="false"){
			continue;
		}
		if(d-c>7||c-d>7){
			flag="false";
			continue;
		}
		else{
			e=arr[c];
			arr[c]=arr[d];
			arr[d]=e;
		}
	}
	if(flag=="false"){
		cout<<"I QUIT!\n";
		for(int i=0;i<a;i++){
			if(i!=0){
				cout<<" ";
			}
			cout<<arr[i];
		}
		cout<<'\n';
	}
	else{
		cout<<"SORTED!\n";
		for(int j=0;j<a;j++){
			if(j!=0){
				cout<<" ";
			}
			cout<<arr[j];
		}
		cout<<'\n';
	}
	return 0;
}
