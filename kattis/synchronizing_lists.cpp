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

    int n;
    while (cin >> n){
        if (n == 0) break;
        vector<int> a(n), b(n), cpa(n), mp(20005);
        for (int i = 0; i < n; i++){
            cin >> a[i];
            cpa[i] = a[i];
        }
        for (int i = 0; i < n; i++){
            cin >> b[i];
        }
        sort (cpa.begin(), cpa.end());
        sort (b.begin(), b.end());
        for (int i = 0; i < n; i++){
            if (cpa[i] < 0) mp[10000 - cpa[i]] = b[i];
            else mp[cpa[i]] = b[i];
        }
        for (int i = 0; i < n; i++){
            if (a[i] < 0) cout << mp[10000 - a[i]] << '\n';
            else cout << mp[a[i]] << '\n';
        }
        cout << '\n';
    }
}
