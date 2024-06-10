#include<bits/stdc++.h>
using namespace std;

int main(){
	ios:: sync_with_stdio(0),cin.tie(0);
	vector<pair<int,int>> v;
	v.emplace_back(2,3);
	v.push_back(make_pair(3,4));
	v.push_back({5,6});
	for(auto it=v.begin();it!=v.end();it++){
		cout/*<<"case "<<i<<'='*/<<(*it).first<<' '<<(*it).second<<'\n';
	        //cout/*<<"case "<<i<<'='*/<<(*it->first)<<' '<<(*it->second)<<'\n';	
	}
	return 0;
}
