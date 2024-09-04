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

    vector<ll> a(10);

    for (int i = 0; i < 10; i++){
        cin >> a[i];
    }

    int n;
    cin >> n;
    vector<ll> b(n);

    for (int i = 0; i < n; i++){
        cin >> b[i];
    }

    vector<pll> arr;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < 10; j++){
            if (b[i] - a[j] < 0) continue;
            arr.emplace_back (b[i] - a[j], i);
        }
    }

    sort (arr.begin(), arr.end());

    /*
    for (auto i : arr) cout << i.F << '\t';
    cout << endl;
    for (auto i : arr) cout << i.S << '\t';
    cout << endl;
    */

    ll l = 0, r = 0;
    ll ans = 1e18;

    unordered_map<ll, ll> cnt;

    while (l < arr.size()){
        while (cnt.size() < n && r < arr.size()){
            if (cnt.find (arr[r].S) == cnt.end()) cnt.insert ({arr[r].S, 1});
            else cnt[arr[r].S]++;
            r++;
        }

        if (cnt.size() == n){
            ans = min (ans, arr[r - 1].F - arr[l].F);
            if (--cnt[arr[l].S] == 0) cnt.erase (arr[l].S);
        }
        l++;
    }

    cout << ans << '\n';

    return 0;
}
