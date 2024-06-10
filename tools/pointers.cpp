#include<bits/stdc++.h>
using namespace std;

int main(){
	int num[10],n;
	int target;
	cin>>n>>target;
	for(int i=0;i<n;i++){
		cin>>num[i];
	}
	sort(num,num+n+1);
	int left,right;
	left=0;
	right=n-1;
	bool is_found=0;
	while(left!=right){
		if(num[left]+num[right]<target){
			left++;
		}
		else if(num[left]+num[right]>target){
			right--;
		}
		else{
			is_found=1;
			break;
		}
	}
	if(is_found) cout<<"Yes\n";
	else cout<<"No\n";
	return 0;
}
