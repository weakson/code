#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

ll len[100005];
const ll M = 1e18;
ll n, k;

char solve(ll l, ll i){
    if (l == 1) return 'N';
    if (l == 2) return 'A';
    if (i > len[l - 2]) return solve (l - 1, i - len[l - 2]);
    else return solve (l - 2, i);
}

int main(){
	weakson;

    cin >> n >> k;

    len[1] = 1;
    len[2] = 1;
    for (int i = 3; i <= n; i++){
        len[i] = min (M, len[i-1] + len[i-2]);
    }

    cout << solve (n, k) << '\n';
}
