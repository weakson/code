#include<bits/stdc++.h>
using namespace std;

vector<int> v;
int n, q;

void op1(int col, int pos){
    int t = pos;
    if (pos > n){
        t = n - pos + n;
    }
    if (pos > n){
        pos = (pos - n) * n + 1;
    }
    else if (pos < n){
        pos = n - pos + 1;
    }
    else{
        pos = 1;
    }
    while (t--){
        v[pos] = max(col, v[pos]);
        pos += n + 1;
    }
    return;
}

void op2(int col, int pos){
    int t = pos;
    if (pos > n){
        t = n - pos + n;
    }
    if (pos > n){
        pos = (pos - n + 1) * n;
    }
    while (t--){
        v[pos] = max(col, v[pos]);
        pos += n - 1;
    }
    return;
}

int main(){
    ios::sync_with_stdio(0), cin.tie(0);
    cin >> n >> q;
    v.resize(4000005);
    while (q--){
        char op;
        int i, k;
        cin >> op >> i >> k;
        if (op == '1'){
            op1(k, i);
        }
        else{
            op2(k, i);
        }
    }
    for (int i = 1; i <= n * n; i++){
        cout << v[i];
        if (i % n == 0) cout << '\n';
        else cout << ' ';
    }
    return 0;
}
