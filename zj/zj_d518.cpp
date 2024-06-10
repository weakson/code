#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int test,i,val;
	string word;
	while(cin >> test){
		val=1;
		map<string,int> mp;
		for(i=0;i<test;i++){
			cin >> word;
			if(mp.find(word) == mp.end()){
				mp[word]=val;
				val++;
				cout << "New! " << mp[word] << '\n'; 
			}
			else{
				cout << "Old! " << mp[word] << '\n';
			}
		}
	
	}

}
