#include<bits/stdc++.h>
using namespace std;

int main(){
    int x=-100,n=8;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=j;k<n;k++){
                x=x+1;
            }
        }
    }
    printf("%d",x);
    return 0;
}