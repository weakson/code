#include<bits/stdc++.h>
using namespace std;

//int f(int a,int dp[]){
//    //O(2^n)  if(a==0||a==1) return 1;
//    //O(2^n)  else return f(a-1)+f(a-2);
//    //dp
//    int num=0;
//    if(!num){
//        if(a==0||a==1){
//            dp[a]=1;
//        }
//        else{
//            dp[a]=f(a-1,dp)+f(a-2,dp);
//        }
//    }
//    return dp[a];
//}

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    long long num;
    long long dp[1000];
    cin>>num;
    for(int i=0;i<num;i++){
        if(i==0||i==1){
            dp[i]=1;
        }
        dp[i]=dp[i-1]+dp[i-2];
    }
    for(int i=0;i<num;i++){
        cout<<dp[i]<<' ';
    }
    return 0;
}
