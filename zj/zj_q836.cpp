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

    int k, x1, y1, x2, y2;
    cin >> k >> x1 >> y1 >> x2 >> y2;

    int pos = 0;

    while (k >= 0){
        pos += k;
        if (pos % x1 == 0) k -= y1;
        if (pos % x2 == 0) k -= y2;
    }

    cout << pos << '\n';
}
