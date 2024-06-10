#include<bits/stdc++.h>
using namespace std;

int main(){
    srand(time(0));
    int pwd,ans,start=1,end=100,round=1;
    ans=rand()%100+1;
    printf("enter number(%d~%d):",start,end);
    do{
        scanf("%d",&pwd);
        if(pwd>=end||pwd<=start){
            round++;
            printf("Error\n");
            printf("enter number(%d~%d):",start,end);
            continue;
        }
        if(pwd==ans){
            printf("you win!!!\n");
            break;
        }
        else{
            if(pwd>ans){
                round++;
                end=pwd;
                printf("enter number(%d~%d):",start,end);
            }
            else{
                round++;
                start=pwd;
                printf("enter number(%d~%d):",start,end);
            }
        }
    }while(true);
    printf("you finish in %d round",round);
    return 0;
}