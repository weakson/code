#include<iostream>
using namespace std;

int main(){
    int dp[81];
    dp[0] = 1;
    dp[1] = 2;
    dp[2] = 2;
    int n;
    while(cin >> n){
        for (int i = 3; i < n; i++){
            dp[i] = dp[i - 2] + dp[i - 3];
        }
        cout << dp[n - 1] << '\n';
    }
}
