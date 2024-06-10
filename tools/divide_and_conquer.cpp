#include<bits/stdc++.>
using namespace std;

int arr[5]={45,64,66,12,34};

int divide(int left,int right){
	int middle=(left+right)/2;
	if(left!=right){
		divide(left,middle);
		divide(middle+1,right);
	}
	else{
		
	}
}

int main(){
	
}
