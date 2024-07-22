#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define pii pair<int, int>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

int h, w, a, b;
ll ans;

void solve (int i, int bit, int A, int B){
    if (i == h * w){
        ans++;
        return;
    }
    if (bit & (1 << i)) return solve (i + 1, bit, A, B);
    if (A){
        if (i % w != w - 1){
            solve (i + 2, bit | (1 << i) | (1 << (i + 1)), A - 1, B);
        }
        if (i + w < h * w){
            solve (i + 1, bit | (1 << i) | (1 << (i + w)), A - 1, B);
        }
    }
    if (B){
        solve (i + 1, bit | (1 << i), A, B - 1);
    }
    return;
}

int main(){
	weakson;

    cin >> h >> w >> a >> b;

    solve (0, 0, a, b);

    cout << ans << '\n';

    return 0;
}
