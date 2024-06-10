#include<bits/stdc++.h>
using namespace std;

multiset<int,greater<int>> s;
int printer;

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    
    while(cin>>printer){
        if(printer==0) break;
        if(printer>0) s.insert(printer);
        if(s.empty()) continue;
        else if(printer==-2) cout<<*s.begin()<<' ',s.erase(s.begin());
        else if(printer==-1) cout<<*s.rbegin()<<' ',s.erase(prev(s.end()));
    }
    cout<<'\n';
    return 0;
}