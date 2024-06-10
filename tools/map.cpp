#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    map<char,string> m;
    m['b']="hhh";
    m['a']="www";
    m['c'];
    cout<<m.size()<<'\n';
    map<const int, string> a;
    a['b']="hhh";
    a['a']="www";
    a['c'];
    for (pair<const int, string> &i: a) {
        cout << "key: " << (char)i.first << ' ';
        cout << "value: " << i.second << '\n';
    }
    for(auto it:m){//for(auto it=m.begin();it!=m.end();it++)
        cout<<it . first<<' ';
        cout<<it . second<<' ';
        cout<<'\n';
    }
    cout<<m.find('c') -> second<<',';
}