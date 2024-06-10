#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    int quesnum,score;
    cin>>quesnum;
    if(quesnum>=40){
        score=100;
    }
    else if(quesnum>20&&quesnum<40){
        score=(quesnum-20)+80;
    }
    else if(quesnum>10&&quesnum<=20){
        score=(quesnum-10)*2+60;
    }
    else{
        score=quesnum*6;
    }
    cout<<score;
    return 0;
}