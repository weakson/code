#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n, tar;
    cin >> n >> tar;

    vector<int> v(n);

    for (int i = 0; i < n; i++){
        cin >> v[i];
    }

    int l = 0, r = n;
    while (l < r){
        int mid = (l + r) / 2;
        if (v[mid] >= tar){
            r = mid;
        }
        else{
            l = mid + 1;
        }
    }
    cout << l << '\n';
}
