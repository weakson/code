#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define pii pair<int, int>
#define swap(a,b) a ^= b ^= a ^= b
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

int main(){
    weakson;

    int n;
    while (cin >> n){
        vector<int> v[30], stk(n);

        for (int i = 0; i < n; i++){
            v[i].emplace_back (i);
            stk[i] = i;
        }

        string op1, op2;
        int a, b;

        while (cin >> op1){
            if (op1 == "quit") break;

            cin >> a >> op2 >> b;

            if (a == b || stk[a] == stk[b]) continue;

            int stk_a = stk[a];
            int stk_b = stk[b];

            if (op1 == "move"){
                while (v[stk_a].back() != a){
                    int Top = v[stk_a].back();
                    stk[Top] = Top;
                    v[Top].emplace_back(Top);
                    v[stk_a].pop_back();
                }
                if (op2 == "onto"){
                    while (v[stk_b].back() != b){
                        int Top = v[stk_b].back();
                        stk[Top] = Top;
                        v[Top].emplace_back(Top);
                        v[stk_b].pop_back();
                    }
                }
                v[stk_b].emplace_back (a);
                v[stk_a].pop_back();
                stk[a] = stk_b;
            }

            else{
                if (op2 == "onto"){
                    while (v[stk_b].back() != b){
                        int Top = v[stk_b].back();
                        stk[Top] = Top;
                        v[Top].emplace_back(Top);
                        v[stk_b].pop_back();
                    }
                }

                stack<int> tmp;
                while (v[stk_a].back() != a){
                    tmp.push (v[stk_a].back());
                    v[stk_a].pop_back();
                }
                tmp.push (a);
                v[stk_a].pop_back();
                while (!tmp.empty()){
                    int Top = tmp.top();
                    tmp.pop();
                    stk[Top] = stk_b;
                    v[stk_b].emplace_back (Top);
                }
            }
        }

        for (int i = 0; i < n; i++){
            cout << i << ": ";
            for (int j : v[i]) cout << j << " ";
            cout << '\n';
        }
    }
}
