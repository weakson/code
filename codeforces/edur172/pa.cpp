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

bool cmp (ll a, ll b){
    return a > b;
}

int main(){
	weakson;

    int t;
    cin >> t;

    while (t--){
        int n, k;
        cin >> n >> k;
        vector<ll> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        sort (v.begin(), v.end(), cmp);

        ll sum = 0;
        for (int i = 0; i < n; i++){
            if (sum + v[i] > k) break;
            sum += v[i];
        }

        cout << k - sum << '\n';
    }
}
