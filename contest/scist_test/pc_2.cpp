#include<iostream>
#include<math.h>
#define ll long long
using namespace std;

ll arr[100005];

int main(){
    ios::sync_with_stdio(0), cin.tie(0);
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    ll rnd = k / n;
    ll sum = 0;
    for (int i = 0; i < n; i++){
        ll temp = arr[i] - rnd;
        if (temp < 0) temp = 0;
        sum += (temp + arr[i]) * (arr[i] - temp + 1) / 2;
        arr[i] = temp;
    }
    ll rest = k % n;
    for (int i = 0; i < rest; i++){
        sum += arr[i];
    }
    cout << sum << '\n';
    return 0;
}
