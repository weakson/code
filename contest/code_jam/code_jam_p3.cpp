#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    int test,num,temp,can=0;
    multiset<int> side;
    cin>>test;
    for(int i=0;i<test;i++){
        cin>>num;
        for(int j=0;j<num;j++){
            cin>>temp;
            side.insert(temp);
        }
        for(int j=1;j<=num;j++){
            if(*side.begin()>=j){
                can++;
                side.erase(side.find(*side.begin()));
            }
            else{
                break;
            }
        }
        cout<<"Case #"<<i<<": "<<can<<'\n';
        can=0;
        side.clear();
    }
    return 0;
}