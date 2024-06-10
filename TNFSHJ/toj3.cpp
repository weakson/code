#include<bits/stdc++.h>
using namespace std;
int main(){
    int num1,num2,num3,GCD;
    scanf("%d",&num1);
    for(int i=0;i<num1;i++){
        GCD=0;
        scanf("%d %d",&num2,&num3);
        GCD=__gcd(num2,num3);
        printf("%d\n",GCD);
    }
    return 0;
}