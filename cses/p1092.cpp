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
    cin >> n;

    vector<int> a, b;

    if (n % 4 == 0){
        for (int i = 1; i <= n; i++){
            if (i % 4 == 1 || i % 4 == 0)
                a.emplace_back (i);
            else
                b.emplace_back (i);
        }
        cout << "YES\n";
        cout << a.size() << '\n';
        for (auto i : a) cout << i << ' ';
        cout << '\n' << b.size() << '\n';
        for (auto i : b) cout << i << ' ';
    }
    else if (n % 4 == 3){
        a = {1, 2};
        b = {3};
        for (int i = 4; i <= n; i++){
            if (i % 4 == 0 || i % 4 == 3)
                a.emplace_back (i);
            else
                b.emplace_back (i);
        }
        cout << "YES\n";
        cout << a.size() << '\n';
        for (auto i : a) cout << i << ' ';
        cout << '\n' << b.size() << '\n';
        for (auto i : b) cout << i << ' ';
    }
    else{
        cout << "NO\n";
    }
}
