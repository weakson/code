#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	int time,num[1005];
	cout<<"��J�ƶq:"; 
	while(cin>>time){
		cout<<"��J�Ʀr:";
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
		cout<<"�Ʀr�Ѥp�Ӥj�Ƨ�:";
		for(int i=0;i<time;i++){
			cout<<num[i]<<" ";
		}
		cout<<'\n'<<"��J�ƶq:";
	}
	return 0;
}
