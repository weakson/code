#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define pii pair<int, int>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

int main(){
	weakson;

    int t; cin >> t;
    cin.ignore();

    while (t--){
        string s;
        getline (cin, s);
        stack<char> stk;
        bool is_space = true;

        for (int i = 0; i < s.size(); i++){
            if (s[i] != ' ') is_space = false;
            if (stk.empty()) stk.push (s[i]);
            else if (s[i] == ')' && stk.top() == '(') stk.pop();
            else if (s[i] == ']' && stk.top() == '[') stk.pop();
            else stk.push (s[i]);
        }

        if (stk.empty() || is_space) cout << "Yes\n";
        else cout << "No\n";
    }

    return 0;
}
