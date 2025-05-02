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

int call_func(){
    string s;
    cin >> s;
    if (s == "f"){
        int x = call_func();
        return 2 * x - 3;
    }
    else if (s == "g"){
        int x = call_func();
        int y = call_func();
        return 2 * x + y - 7;
    }
    else if (s == "h"){
        int x = call_func();
        int y = call_func();
        int z = call_func();
        return 3 * x - 2 * y + z;
    }
    else return stoi (s);
    // string to int
}

int main(){
    weakson;

    cout << call_func() << '\n';

}
