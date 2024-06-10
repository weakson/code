#include<bits/stdc++.h>
using namespace std;

bool cmp (int a, int b){
    return a > b;
}

bool pii_cmp (pair<int, int> a, pair<int, int> b){
    if (a.second == b.second) return a.first > b.first;
    return a.second > b.second;
}

int main(){

    int n = 5;

    // 陣列用法
    int arr[5];
    for (int i = 0; i < n; i++) cin >> arr[i];
    sort (arr, arr + n);       // 由小排到大（預設）
    sort (arr, arr + n, cmp);  // 由大排到小

    // vector 用法
    vector<int> v(5);
    for (int i = 0; i < n; i++) cin >> v[i];
    sort (v.begin(), v.end());       // 由小排到大（預設）
    sort (v.begin(), v.end(), cmp);  // 由大排到小

    // vector<pair<int, int>> 用法
    vector<pair<int, int> > vpii(5);
    for (int i = 0; i < n; i++) cin >> vpii[i].first >> vpii[i].second;
    sort (vpii.begin(), vpii.end());           // 先排 first 再排 second 並且由小排到大（預設）
    sort (vpii.begin(), vpii.end(), pii_cmp);  // 先排 second 再排 first 並且由大排到小
    
    return 0;
}
