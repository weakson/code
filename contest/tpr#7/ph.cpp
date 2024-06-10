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

    int t;
    cin >> t;

    while (t--){
        int n;
        cin >> n;

        vector<int> v(n), a(n);

        for (int i = 0; i < n; i++){
            cin >> v[i];
            a[i] = v[i];
        }

        sort (a.begin(), a.end());

        auto s = unique (a.begin(), a.end());
        a.resize (s - a.begin());

        for (int i = 0; i < n; i++){
            auto ans = lower_bound (a.begin(), a.end(), v[i]);
            cout << ans - a.begin() + 1 << ' ';
        }

        cout << '\n';
    }

    return 0;
}
