#include<iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0), cin.tie(0);
    int n, k;
    cin >> n >> k;
    long long arr[10005];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    long long ptr, ans = 0;
    for (int i = 0; i < n; i++){
        int ptr = i;
        long long sum = 0;
        long long temp[10005];
        for (int j = 0; j < n; j++){
            temp[j] = arr[j];
        }
        for (int j = 0; j < k; j++, ptr++){
            if (ptr >= n){
                ptr = 0;
            }
            sum += temp[ptr];
            if (temp[ptr] != 0) temp[ptr]--;
        }
        ans = max (ans, sum);
    }
    cout << ans << '\n';
    return 0;
}
