#include<iostream>
#include<vector>
using namespace std;

int main(){
    ios::sync_with_stdio(0), cin.tie(0);
    int n;
    cin >> n;
    vector<long long> v(n + 1);
    v[0] = 0;
    for (int i = 1; i <= n; i++){
        long long temp;
        cin >> temp;
        v[i] = v[i - 1] + temp;
    }
    long long ans = -1e10;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            ans = max (v[i] - v[j - 1], ans);
        }
    }
    cout << ans << '\n';
    return 0;
}
