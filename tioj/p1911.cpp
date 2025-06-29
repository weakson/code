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

    multiset<int> s;
    int n;

    while (cin >> n && n != 0){
        if (n < 0 && s.empty()) continue;
        if (n == -1){
            cout << *s.begin() << ' '; 
            s.erase (s.begin());
        }
        else if (n == -2){
            cout << *--s.end() << ' ';
            s.erase (--s.end());
        }
        else s.insert (n);
    }

    cout << '\n';
}
