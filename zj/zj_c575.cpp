#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define pii pair<int, int>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

vector<ll> v;
int n, k;

bool check (ll x){
    int cnt = 0;
    for (int i = 0; i < n; i++){
        int j = i;
        while (j < n && v[j] <= v[i] + x) j++;
        if (++cnt > k) return false;
        i = j - 1;
    }
    return true;
}

int main(){
	weakson;

    cin >> n >> k;

    v.resize (n);
    for (int i = 0; i < n; i++) cin >> v[i];

    sort (v.begin(), v.end());

    ll M = v[n - 1];

    ll p = M;
    for (ll j = M / 2; j > 0; j /= 2){
        while (p - j >= 1 && check (p - j)) p -= j;
    }

    cout << p << '\n';

    return 0;
}
