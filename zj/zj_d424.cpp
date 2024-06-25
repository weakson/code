#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define pii pair<int, int>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

int main(){
	weakson;

    int l, h, r;
    vector<int> v(10010);

    int s = 1e5, e = 0;
    while (cin >> l >> h >> r){
        s = min (s, l);
        e = max (e, r);
        for (int i = l; i < r; i++){
            v[i] = max (v[i], h);
        }
    }

    for (int i = s; i <= e; i++){
        if (i == s || v[i] != v[i - 1]){
            cout << i << ' ' << v[i] << " \n"[i == e];
        }
    }

    return 0;
}
