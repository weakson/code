#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define pii pair<int, int>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

bool check (int n, vector<ll> v, int x){
    vector<ll> tmp = v;
    for (int i = n - 1; i >= 2; i--){
        if (tmp[i] < x) return false;
        ll d = min ((tmp[i] - x), v[i]) / 3;
        tmp[i] -= 3 * d;
        tmp[i - 1] += d;
        tmp[i - 2] += 2 * d;
    }
    if (tmp[0] < x || tmp[1] < x) return false;
    return true;
}

int main(){
	weakson;

    int t;
    cin >> t;

    while (t--){
        int n;
        cin >> n;
        
        vector<ll> v(n);
        for (auto &i : v) cin >> i;

        ll pos = 1, M = 1e9;
        for (ll j = M / 2; j > 0; j /= 2){
            while (pos + j < M && check (n, v, pos + j)) pos += j;
        }

        cout << pos << '\n';
    }

    return 0;
}
