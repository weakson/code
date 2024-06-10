#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	int time,num[1005];
	cout<<"块计秖:"; 
	while(cin>>time){
		cout<<"块计:";
		for(int i=0;i<time;i++){
			cin>>num[i];
		}
		for(int i=0;i<time;i++){
			for(int j=0;j<time-i;j++){	
				if(num[j]>num[j+1]){
					swap(num[j],num[j+1]);
				}
			}
		}
		cout<<"计パτ逼:";
		for(int i=0;i<time;i++){
			cout<<num[i]<<" ";
		}
		cout<<'\n'<<"块计秖:";
	}
	return 0;
}
