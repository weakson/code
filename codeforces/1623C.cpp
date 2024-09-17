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
    for (int i = 2; i < n; i++){
        if (v[i] <= x) continue;
        ll d = (v[i] - x) / 3;
        v[i] -= 3 * d;
        v[i - 1] += d;
        v[i - 2] += 2 * d;
    }
    dbg (x);
    for (auto i : v) cout << i << ' ';
    cout << endl;
    cout << endl;
    for (auto i : v){
        if (i < x) return false;
    }
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
