#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++) cin >> v[i];
    sort (v.begin(), v.end());

    int q;
    cin >> q;

    while (q--){
        int m; cin >> m;

        auto first = lower_bound (v.begin(), v.end(), m);
        auto second = upper_bound (v.begin(), v.end(), m);
        cout << second - first << '\n';
    }
}
