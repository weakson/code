#include<bits/stdc++.h>
using namespace std;

multiset<long long> bigger,smaller;
int test,num;

void move_big(){
    smaller.insert(*bigger.begin());
    bigger.erase(bigger.begin());
}

void move_small(){
    bigger.insert(*smaller.rbegin());
    smaller.erase(*smaller.rbegin());
}

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    
    cout<<fixed<<setprecision(6);
    
    cin>>test;

    for(int i=1;i<=test;i++){
        cin>>num;
        if(i==1 || num<*smaller.rbegin()) smaller.insert(num);
        else bigger.insert(num);

        while(bigger.size()<i/2) move_small();
        while(bigger.size()>i/2) move_big();

        double a;

        if(i&1) a=*smaller.rbegin();
        else a=(*smaller.rbegin()+*bigger.begin())*1.0 /2;
        cout<<a<<'\n';

    }
    return 0;
}