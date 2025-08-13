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

    while (getline(cin, s)){
        for (int i = 0; i < s.size(); i++){
            if (s[i] >= 'A' && s[i] <= 'Z'){
                s[i] = 'a' + (s[i] - 'A');
            }
        }
        bool is_found = false;

        for (int i = 0; i < s.size(); i++){
            if (s[i] == 'p'){
                if (s.substr(i, 7) == "problem"){
                    is_found = true;
                    break;
                }
            }
        }

        if (is_found) cout << "yes\n";
        else cout << "no\n";
    }
}
