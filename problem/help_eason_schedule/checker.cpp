#include "testlib.h"
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

int main(int argc, char* argv[]){

    registerTestlibCmd (argc, argv);

    int n = inf.readInt();

    vector<ll> v(n + 1);
    for (int i = 1; i <= n; i++){
        v[i] = inf.readLong();
    }

    ll x = inf.readLong();

    int pl = ouf.readInt (1, n, "l");
    int pr = ouf.readInt (1, n, "r");

    ll psum = 0;
    for (int i = pl; i <= pr; i++) psum += v[i];

    int jl = ans.readInt();
    int jr = ans.readInt();

    ll jsum = 0;
    for (int i = jl; i <= jr; i++) jsum += v[i];

    if (abs (jsum - x) == abs (psum - x)){
        quitf (_ok, "The answer is correct");
    }
    else{
        quitf (_wa, "The answer is wrong, expected: %d, %d, found %d, %d", jl, jr, pl, pr);
    }
}
