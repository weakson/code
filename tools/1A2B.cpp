#include<bits/stdc++.h>
using namespace std;

int main(){
    srand(time(0));
    int num[9],a,b,ans[9],replacement,round=0;
    for(int i=0;i<4;i++){
        num[i]=rand()%9+1;
        for(int j=0;j<i;j++){
            if(num[j]==num[i]){
                i--;
                break;
            }
        }
    }
    do{
        printf("enter four different number(1~9):");
        a=0;
        b=0;
        fill(ans,ans+4,0);
        scanf("%d",&replacement);
        if(replacement<1000||replacement>=10000){
            printf("Error\n");
            continue;
        }
        ans[0]=replacement/1000;
        ans[1]=(replacement/100)%10;
        ans[2]=(replacement%100)/10;
        ans[3]=replacement%10;
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                if(num[i]==ans[j]){
                    b++;
                    break;
                }
            }
        }
        for(int i=0;i<4;i++){
            if(num[i]==ans[i]){
                a++;
                b--;
            }
        }
        printf("%dA%dB\n",a,b);
        round++;
    }while(a!=4);
    printf("you win!!!!\n");
    printf("finish in %d round !\n",round);
    return 0;
}
