#include<bits/stdc++.h>
using namespace std;

int main(){
	int numbers,target,left,right,middle,round=0;
	int bin[100];
	cout<<"How many numbers do you want to enter?: ";
	cin>>numbers;
	cout<<"Enter "<<numbers<<" numbers:\n";
	for(int i=0;i<numbers;i++){
		cin>>bin[i];
	}
	sort(bin,bin+numbers);
	cout<<"These numbers after sorting:\n";
	for(int i=0;i<numbers;i++){
		cout<<bin[i]<<' ';
	}
	cout<<'\n';
	cout<<"Enter target: ";
	cin>>target;
	left=0;
	right=numbers;
	bool is_found=0;
	while(left!=right){
		middle=(left+right)/2;
		round++;
		cout<<"Round"<<round<<'\n';
		if(bin[middle]<target){
			left=middle+1;
			cout<<"left = "<<left<<",right = "<<right<<"\n";
		}
		else if(bin[middle]>target){
			right=middle-1;
			cout<<"left = "<<left<<",right = "<<right<<"\n";
		}
		else{
			is_found=1;
			break;
		}
	}
	if(is_found){
		cout<<"target's index = "<<middle<<'\n';
	}
	else{
		cout<<"can't found the target\n";
	}
	return 0;
}
