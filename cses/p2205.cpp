#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define pii pair<int, int>
#define swap(a,b) a ^= b ^= a ^= b
#define dbg(x) cout << #x << " = " << x << endl;
#define lowbit(x) x & -x
using namespace std;

int n;

inline void dump (int x){
    for (int i = (1 << n - 1); i > 0; i >>= 1) cout << (bool)(x & i);
    cout << '\n';
}

int main(){
    weakson;

    cin >> n;

    int num = 0;
    dump (num);
    for (int i = 1; i < (1 << n); i++){
        num ^= lowbit(i);
        dump (num);
    }
}
