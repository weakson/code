#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	int time,num[1005];
	cout<<"輸入數量:"; 
	while(cin>>time){
		cout<<"輸入數字:";
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
		cout<<"數字由小而大排序:";
		for(int i=0;i<time;i++){
			cout<<num[i]<<" ";
		}
		cout<<'\n'<<"輸入數量:";
	}
	return 0;
}
