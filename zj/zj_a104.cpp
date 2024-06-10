#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	int time,num[1005];
	while(cin>>time){
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
		for(int i=0;i<time;i++){
			cout<<num[i]<<" ";
		}
		cout<<'\n';
	}
	return 0;
}
