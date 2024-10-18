#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define pii pair<int, int>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

const double eps = 1e-6;
int n, k;
vector<ll> v;

bool check (double x){
    ll cnt = 0;
    for (auto i : v){
        if (abs (i - x) <= eps) cnt += 1;
        else cnt += i / x;
    }
    return cnt >= k;
}

int main(){
	weakson;

    cin >> n >> k;

    v.resize (n);
    ll M = -1;
    for (auto &i : v) cin >> i, M = max (M, i);

    double p = 0;
    for (double j = M / 2; j > eps; j /= 2){
        while (p + j <= M && check (p + j)) p += j;
    }

    cout << fixed << setprecision (6) << p << '\n';
}
