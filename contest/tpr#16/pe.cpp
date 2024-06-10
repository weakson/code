#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

int n, k, a, b, ans = 1e8;
int ca, cb;

void solve (int na, int nb, int l){
    if (na < 10) solve (na + 1, nb, l - a);
    if (nb < 10) solve (na, nb + 1, l - b);

    int temp = l - k;
    if (temp < 0) return;

    if (temp < ans){
        ans = temp;
        ca = na;
        cb = nb;
    }
    else if (temp == ans && na > ca){
        ca = na;
        cb = nb;
    }
    return;
}

int main(){
	weakson;

    cin >> n >> k >> a >> b;

    solve (0, 0, n);

    cout << ca << ' ' << cb << ' ' << ans << '\n';

    return 0;
}
