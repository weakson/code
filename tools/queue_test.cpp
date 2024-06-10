#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    priority_queue<int> pq;
    int temp;
    while(cin>>temp){
        if(temp==0){
            break;
        }
        pq.push(temp);
    }    
    int size=pq.size();
    for(int i=0;i<size;i++){
        //cout<<"priority_queue's size: "<<pq.size()<<'\n';
        cout<<pq.top()<<' ';
        pq.pop();
    }
    cout<<'\n';
    return 0;
}