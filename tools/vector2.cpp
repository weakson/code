#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<tuple<int,int,int>> vt;
    vt.emplace_back(1,2,3);
    
    //t int* myarr;
    vector<int*> v;
    int A[4]={1,2,3,4};
    int B[4]={5,6,7,8};
    v.emplace_back(A);
    v.emplace_back(B);
    for(auto it=v.begin();it!=v.end();++it){
        for(int i=0;i<4;i++){
            printf("%d ",(*it)[i]);
        }
        cout<<'\n';
    }
}