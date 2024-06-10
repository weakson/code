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

    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    int p = 0;
    int ans = 0;

    while (p < n){
        int num = lower_bound (v.begin(), v.end(), v[p] + 1000) - v.begin() - p;
        int tmp = (num % k == 0) ? (num / k) : (num / k + 1);
        ans = max (ans, tmp);
        p += num;
    }

    cout << ans << '\n';

    return 0;
}
