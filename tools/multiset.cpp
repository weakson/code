#include<bits/stdc++.h>
using namespace std;

int main(){
    multiset<int> s;
    s.insert(5);
    s.insert(5);
    s.erase(prev(s.end()));
    for(int i:s) cout<<i<<' ';
    return 0;
}