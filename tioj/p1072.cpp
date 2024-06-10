#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define pii pair<int, int>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

bool cmp (pii a, pii b){
    if (a.S == b.S) return a.F < b.F;
    return a.S > b.S;
}

int main(){
	weakson;

    int n;
    while (cin >> n){
        if (n == 0) break;

        vector<pii> v(n);
        for (int i = 0; i < n; i++) cin >> v[i].F >> v[i].S;

        sort (v.begin(), v.end(), cmp);

        ll sum = 0, ans = 0;
        for (int i = 0; i < n; i++){
            sum += v[i].F;
            ans = max (ans, sum + v[i].S);
        }

        cout << ans << '\n';
    }

    return 0;
}
