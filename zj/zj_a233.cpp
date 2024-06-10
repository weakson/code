#include<bits/stdc++.h>
using namespace std;

int main(){
    int num1,num[1000000];
    scanf("%d",&num1);
    for(int i=0;i<num1;i++){
        scanf("%d",&num[i]);
    }
    sort(num,num+num1);
    for(int i=0;i<num1;i++) printf("%d ",num[i]);
    return 0;
}