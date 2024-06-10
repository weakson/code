#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0),cin.tie(0);
	int n,x,temp,ans[3];
	bool is_found=0;
	cin>>n>>x;
	vector<pair<int,int>> v;
	for(int i=0;i<n;i++){
		cin>>temp;
		v.emplace_back(temp,i);
	}
	sort(v.begin(),v.end());
	for(int i=0;i<n;i++){
		int left=i+1,right=n-1;
		while(left<right){
			if(v[i].first+v[left].first+v[right].first>x){
				right--;
			}
			else if(v[i].first+v[left].first+v[right].first<x){
				left++;
			}
			else{
				ans[0]=v[i].second;
				ans[1]=v[left].second;
				ans[2]=v[right].second;
				is_found=1;
				break;
			}
		}
		if(is_found){
			break;
		}
	}
	sort(ans,ans+3);
	if(is_found) cout<<ans[0]+1<<' '<<ans[1]+1<<' '<<ans[2]+1<<'\n';
	else cout<<"IMPOSSIBLE\n";
	return 0;
}
