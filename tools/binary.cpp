#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;
    while(true){
        scanf("%d",&num);
        if(num&1==1){
            printf("odd\n");
        }
        else{
            printf("even\n");
        }
    }
    return 0;
}