#include<bits/stdc++.h>
using namespace std;

int n, k;
vector<long long> v;

bool cmp (long long d){
    long long ed = v[0] + d;
    int cnt = 1;
    for (int i = 0; i < n; i++){
        while (v[i] > ed){
            cnt++;
            ed = v[i] + d;
        }
    }
    if (cnt <= k) return true;
    return false;
}

int main(){

    cin >> n >> k;
    v.resize(n);

    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort (v.begin(), v.end());


    long long l = 0, r = v[n - 1] - v[0];
    long long ans = r;
    while (l < r){
        int mid = (l + r) / 2;
        if (cmp(mid)){
            ans = mid;
            r = mid;
        }
        else{
            l = mid + 1;
        }
    }
    cout << ans << '\n';
}
