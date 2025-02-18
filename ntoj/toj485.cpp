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
    
    int n;
    string s;
    cin >> n >> s;

    int len = 0;
    for (int i = n - 1; i >= 0; i--){
        int l, r;
        bool is_found = true;
        for (l = i, r = n - 1; l <= (l + r) / 2; l++, r--){
            if (s[l] != s[r]){
                is_found = false;
                break;
            }
        }
        if (is_found) len = n - i;
    }
    cout << n - len << '\n';
}
