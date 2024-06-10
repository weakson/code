#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define pii pair<int, int>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

vector<ll> x;
int n;

pair<ll, ll> solve(int a){
    if (a == n - 1){
        pair<ll, ll> tmp = {x[n - 1], 1};
        return tmp;
    }

    pair<ll, ll> p = solve (a + 1);

    swap(p.F, p.S);

    p.F += x[a] * p.S;

    ll G = gcd (p.F, p.S);
    p.F /= G;
    p.S /= G;

    return p;
}

int main(){
	weakson;

    cin >> n;

    x.resize(n);
    for (int i = 0; i < n; i++) cin >> x[i];

    pair<ll, ll> ans = solve (0);

    cout << ans.F << "/" << ans.S << '\n';
}
