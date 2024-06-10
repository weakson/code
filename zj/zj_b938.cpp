#include<bits/stdc++.h>
using namespace std;

int num,operate,note,line[1000005],last;

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    cin>>num>>operate;
    for(int i=1;i<=num;i++) line[i]=i;
    last=num;
    for(int i=0;i<operate;i++){
        cin>>note;
        if(note==last || line[note]==0){
            cout<<"0u0 ...... ?\n";
            continue;
        }
        int j=note+1;
        while(line[j]==0 && j<=last){
            j++;
        }
        if(j==last) last=note;
        cout<<line[j]<<'\n';
        line[j]=0;
    }
    return 0;
}