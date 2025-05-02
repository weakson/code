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

int n, P;
ll ans, diff = 1e15;
ll A[30];

void sol (int i, int sum){
    if (i == n){
        ll tmp = P - sum;
        if (P >= sum && tmp < diff){
            ans = sum;
            diff = tmp;
        }
        return;
    }

    sol (i + 1, sum);
    sol (i + 1, sum + A[i]);
}

int main(){
    weakson;

    cin >> n >> P;
    for (int i = 0; i < n; i++) cin >> A[i];

    sol (0, 0);

    cout << ans << '\n';
}
