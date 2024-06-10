#include<bits/stdc++.h>
using namespace std;

int main(){
    int num,plus;
    char word[10005];
    scanf("%d",&num);
    scanf("%s",word);
    plus=num;
    for(int i=num-1;i>=0;i--){
        if(word[i]==word[i-1]){
            plus=i-1;
        }
    }
}