#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    string firstl,secondl;
    int test,row,column;
    cin>>test;
    for(int i=1;i<=test;i++){
        firstl.clear(),secondl.clear();
        cin>>row>>column;
        cout<<"Case #"<<i<<":\n";
        for(int j=1;j<=(2*column)+1;j++){
            if(j&1){
                firstl+='+';
                secondl+='|';
            }
            else{
                firstl+='-';
                secondl+='.';
            }
        }
        for(int j=1;j<=(2*row)+1;j++){
            if(j<=2){
                cout<<"..";
                for(int k=0;k<(2*column)-1;k++){
                    cout<<firstl[k];
                }
                cout<<'\n';
                cout<<"..";
                for(int k=0;k<(2*column)-1;k++){
                    cout<<secondl[k];
                }
                cout<<'\n';
                j++;
            }
            else{
                if(j&1){
                    cout<<firstl<<'\n';
                }
                else{
                    cout<<secondl<<'\n';
                }
            }
        }
    }
    return 0;
}