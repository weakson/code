#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, k;
    cin >> n >> k;

    int arr[100];
    vector<int> v(n);

    for (int i = 0; i < n; i++){
        cin >> arr[i];
        v[i] = arr[i];
    }

    sort (arr, arr + n);
    sort (v.begin(), v.end());

    // 陣列用法
    bool p1 = binary_search (arr, arr + n, k);
    int *p2 = lower_bound (arr, arr + n, k);
    int *p3 = upper_bound (arr, arr + n, k);

    // vector 用法
    bool vp1 = binary_search (v.begin(), v.end(), k);
    auto vp2 = lower_bound (v.begin(), v.end(), k);
    auto vp3 = upper_bound (v.begin(), v.end(), k);

    cout << p1 << ' ' << *p2 << ' ' << *p3 << '\n';
    cout << vp1 << ' ' << *vp2 << ' ' << *vp3 << '\n';

    return 0;
}
