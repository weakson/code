#include<bits/stdc++.h>
using namespace std;

vector<long long> v;

long long solve (int l, int r){

    if (l + 1 == r) return v[l];
    
    int mid = (l + r) / 2;

    long long l_ans = solve (l, mid);
    long long r_ans = solve (mid, r);

    long long sum;
    long long l_max = -1e10, r_max = -1e10;

    sum = 0;
    for (int i = mid - 1; i >= l; i--){
        sum += v[i];
        l_max = max (l_max, sum);
    }

    sum = 0;
    for (int i = mid; i < r; i++){
        sum += v[i];
        r_max = max (r_max, sum);
    }

    long long ans = max ({l_max + r_max, l_ans, r_ans});

    return ans;
}

int main(){

    int n;
    cin >> n;
    v.resize(n);

    for (int i = 0; i < n; i++){
        cin >> v[i];
    }

    long long ans = solve (0, n);

    cout << ans << '\n';

    return 0;
}
