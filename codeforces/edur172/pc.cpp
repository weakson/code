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
        ll n, k;
        cin >> n >> k; 

        string s;
        cin >> s;

        vector<ll> arr(n);
        arr[n - 1] = 0;
        for (int i = n - 2; i >= 0; i--){
            arr[i] = arr[i + 1] + (s[i + 1] == '1' ? 1 : -1);
        }

        arr.pop_back();

        sort (arr.begin(), arr.end(), cmp);

        ll ans = 1, sum = 0;
        for (auto i : arr){
            if (sum >= k) break;
            sum += i;
            ans++;
        }

        if (sum < k) cout << "-1\n";
        else cout << ans << '\n';
    }
}
