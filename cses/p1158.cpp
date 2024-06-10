#include<iostream>
#include<vector>
#define weakson ios::sync_with_stdio(0), cin.tie(0);
using namespace std;

vector<int> dp(100005, 0);
int h[1005], s[1005];

int main(){
    weakson
    int n, x;
    cin >> n >> x;

    for (int i = 0; i < n; i++){
        cin >> h[i];
    }

    for (int i = 0; i < n; i++){
        cin >> s[i];
    }

    for (int i = 0; i < n; i++){
        cout << '\n';
        cout << "price of obeject = " << h[i] << '\n';
        cout << "page of object = " << s[i] << '\n';
        cout << '\n';
        for (int j = x; j >= h[i]; j--){
            cout << "dp[" << j << "] = ";
            cout << "max(dp[" << j << "] (" << dp[j] << "), ";
            cout << "dp[" << j - h[i] << "] + " << s[i];
            cout << " (" << dp[ j - h[i] ] + s[i] << ") )\n";
            dp[j] = max(dp[j], dp[ j - h[i] ] + s[i]);
        } 
    }

    cout << dp[x] << '\n';
    return 0;
}
