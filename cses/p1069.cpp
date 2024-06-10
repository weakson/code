#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0),cin.tie(0);
	string s;
	cin>>s;
	vector<int> v;
	v.emplace_back(1);
	for(int j=0,i=1;i<=s.size();i++){
		if(s[i]==s[i-1]) v[j]++;
		else v.emplace_back(1),j++;
	}
	sort(v.begin(),v.end());
	cout<<*v.rbegin()<<'\n';
	return 0;
}
