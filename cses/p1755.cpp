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

    string s;
    cin >> s;

    int alp[30] = {};
    for (int i = 0; i < s.size(); i++){
        alp[s[i] - 'A']++;
    }

    int cnt = 0, idx;
    for (int i = 0; i < 26; i++){
        if (alp[i] & 1){
            cnt++;
            idx = i;
        }
    }

    if (cnt > 1){
        cout << "NO SOLUTION\n";
    }
    else{
        stack<char> stk;
        for (int i = 0; i < 26; i++){
            while (alp[i] > 1){
                cout << (char)(i + 'A');
                stk.push (i + 'A');
                alp[i] -= 2;
            }
        }
        if (cnt) cout << (char)(idx + 'A');
        while (!stk.empty()){
            cout << stk.top();
            stk.pop();
        }
    }
}
