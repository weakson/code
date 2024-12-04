#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define pii pair<int, int>
#define swap(a,b) a ^= b ^= a ^= b
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

int main(){
	weakson;

    int t;
    cin >> t;

    while (t--){
        int n;
        cin >> n;

        vector<ll> v(n + 1);
        for (int i = 0; i < n; i++){
            int tmp; cin >> tmp;
            v[tmp]++;
        }

        ll cnt = 0, tp = 0;
        for (int i = 1; i <= n; i++){
            if (v[i] == 1) cnt++;
            else if (v[i] != 0) tp++;
        }

        cnt = (cnt & 1) ? cnt / 2 + 1 : cnt / 2;
        ll lft = (n & 1) ? n / 2 + 1 : n / 2;
        ll ans = 0;

        if (cnt >= lft) ans = lft * 2;
        else{
            ans = cnt * 2;
            if (tp >= lft - cnt) ans += lft - cnt;
            else ans += tp;
        }

        cout << ans << '\n';
    }
}
