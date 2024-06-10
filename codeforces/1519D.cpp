#include<iostream>
#define ll long long
using namespace std;

int n;
int a[5005], b[5005], c[5005];

long long odd_sol(){
    int l = n / 2 + 1, r = n / 2 + 1;
    long long sum = a[i] * b[i];
    sum += c[l - 1] + c[n] - c[r];
    long long now = a[i] * b[i];
    while (l != 1 or r != n){
        long long temp;
        l--;
        r++;
        temp = now + a[l] * b[l] + a[r] * b[r];
        temp += c
    }
}



int main(){
    ios::sync_with_stdio(0), cin.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++){
        cin >> b[i];
    }
    c[i] = 0;
    for (int i = 1; i <= n; i++){
        c[i] = c[i - 1] + a[i] * b[i];
    }
}
