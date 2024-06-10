#include<bits/stdc++.h>
using namespace std;

int Class(int a,int b){
    if(a==0){
        return a;
    }
    else if(b<0){
        b++;
        return b;
    }
    else{
        a=Class(a-2,b)+Class(a,b-2);
    }
    printf("%d ",a);
    return a;
}

int main(){
    int a=10,b;
    b=a-1;
    Class(a,b);
    return 0;
}
//0 1 1 2 3 5 8 13 21 34