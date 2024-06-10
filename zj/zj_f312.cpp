#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

int main(){
	weakson;

    int n, a[2], b[2], c[2];
    cin >> a[0] >> b[0] >> c[0];
    cin >> a[1] >> b[1] >> c[1];
    cin >> n;

    int ans = -1e9;
    for (int i = 0; i <= n; i++){
        int p = n - i;
        int y1 = a[0] * i * i + b[0] * i + c[0];
        int y2 = a[1] * p * p + b[1] * p + c[1];
        ans = max (ans, y1 + y2);
    }

    cout << ans << '\n';
}
