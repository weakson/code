#include<bits/stdc++.h>
#define ll long long
using namespace std;

struct Queue{
    int head, tail, arr[100005];
    Queue(): head(0), tail(0){}
    void push(int n){
        arr[tail++] = n;
    }
    void pop(){
        if (head == tail) cout << "empty!\n";
        else cout << arr[head++] << '\n';
    }
};

int main(){
    ios::sync_with_stdio(0), cin.tie(0);
    Queue q;
    int t;
    cin >> t;
    while (t--){
        int op;
        cin >> op;
        if (op == 1){
            int n;
            cin >> n;
            q.push(n);
        }
        else{
            q.pop();
        }
    }
    return 0;
}
