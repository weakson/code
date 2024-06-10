#include<bits/stdc++.h>
#define ll long long
#define weakson ios::sync_with_stdio(0), cin.tie(0);
using namespace std;

int main(){
    weakson;
    int n;
    cin >> n;
    stack<int> stk;
    bool is_good = true;
    for (int i = 0; i < n; i++){
        int a;
        cin >> a;
        if (stk.empty() and a < 0) is_good = false;
        else if (a < 0){
            if (stk.top() + a == 0){
                stk.pop();
            }
            else{
                is_good = false;
            }
        }
        else{
            stk.push(a);
        }
    }
    if (!is_good or !stk.empty()) cout << "lose light light\n";
    else cout << "weed\n";
    return 0;
}
