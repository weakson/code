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

int n;
vector<ll> v;
ll ans = 1e15;

void f (int id, ll A, ll B){
    if (id == n){
        ans = min (ans, abs (A - B));
        return;
    }
    f (id + 1, A + v[id], B);
    f (id + 1, A, B + v[id]);
}

int main(){
    weakson;

    cin >> n;
    v.resize(n);
    for (auto &i : v) cin >> i;

    f (0, 0, 0);

    cout << ans << '\n';
}
