#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0), cin.tie(0);
    stack<int> stk;
    int n;
    cin >> n;
    while (n--){
        int op;
        cin >> op;
        if (op == 1){
            int x;
            cin >> x;
            stk.push(x);
        }
        else{
            if (stk.empty()) cout << "empty!\n";
            else{
                cout << stk.top() << '\n';
                stk.pop();
            }
        }
    }
    return 0;
}
