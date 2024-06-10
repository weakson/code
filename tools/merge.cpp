#include<bits/stdc++.h>
#define int long long
using namespace std;

vector<int> merge(vector<int> arr){
	int n = arr.size();
	if(n == 1) return arr;
	
	int mid = n/2;
	vector<int> left,right;
	for(int i = 0;i<n;i++){
		if(i<mid) left.emplace_back(arr[i]);
		else right.emplace_back(arr[i]);
	}

	left = merge(left);
	right = merge(right);

	int l = 0,r=0;
	vector<int> sorted;
	while(l<left.size() && r<right.size()){
		if(left[l]<right[r]){
			sorted.emplace_back(left[l]);
			l++;
		}
		else{
			sorted.emplace_back(right[r]);
			r++;
		}
	}

	while(l<left.size()){
		sorted.emplace_back(left[l]);
		l++;
	}
	while(r<right.size()){
		sorted.emplace_back(right[r]);
		r++;
	}
	return sorted;
}

signed main(){
	ios_base::sync_with_stdio(0);
	cout<<"Enter how many number do you want to sort: ";
	int n;
	cin>>n;
	vector<int> v(n);
	cout<<"Enter your numbers: ";
	for(int i = 0;i<n;i++){
		cin>>v[i];
	}
	v = merge(v);
	cout<<"Your numbers after sorted: ";
	for(int i = 0;i<n;i++) cout<<v[i]<<' ';
	cout<<'\n';
	return 0;
}
