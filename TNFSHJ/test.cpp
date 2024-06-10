#include<iostream>
#include<algorithm>
using namespace std;

long long arr[1000005];

int main(){
    ios::sync_with_stdio(0), cin.tie(0);
	int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort (arr, arr + n);
    int q;
    cin >> q;
    for (int i = 0; i < q; i++){
        long long temp;
        cin >> temp;
        long long *tail = upper_bound(arr, arr + n, temp);
        long long *head = lower_bound(arr, arr + n, temp);
        cout << tail - head << '\n';
    }
    return 0;
}
