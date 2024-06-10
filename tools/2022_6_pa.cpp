#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(0),cin.tie(0);
    set<int,greater<int>> s;
    int temp,ans=1;
    for(int i=0;i<3;i++){
        cin>>temp;
        if(s.insert(temp).second==0) ans++;
    }
    cout<<ans<<' ';
    for(auto it=s.begin();it!=s.end();it++){
        cout<<*it<<' ';
    }
    cout<<'\n';
    return 0;
}
    