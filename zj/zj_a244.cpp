#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    ll time,a,b,c;
    cin>>time;
    for(int i=0;i<time;i++){
        cin>>a>>b>>c;
        if(a==1){
            cout<<b+c<<'\n';
        }
        else if(a==2){
            cout<<b-c<<'\n';
        }
        else if(a==3){
            cout<<b*c<<'\n';
        }
        else{
            cout<<b/c<<'\n';
        }
    }
    return 0;
}