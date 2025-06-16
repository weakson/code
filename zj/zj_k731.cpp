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

    int n; cin >> n;
    int x[105], y[105];

    for (int i = 0; i < n; i++) cin >> x[i] >> y[i];

    int ux = x[0];
    int uy = y[0];

    int Left, Right, Return;
    Left = Right = Return = 0;

    for (int i = 1; i < n; i++){
        int vx = x[i] - x[i - 1];
        int vy = y[i] - y[i - 1];

        int Cross = ux * vy - uy * vx;

        if (Cross > 0) Left++;
        else if (Cross < 0) Right++;
        else{
            if (ux * vx + uy * vy < 0) Return++;
        }

        ux = vx;
        uy = vy;
    }

    cout << Left << ' ' << Right << ' ' << Return << '\n';
}
