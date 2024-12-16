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

    int n; cin >> n;

    int k = sqrt (n);
    vector<ll> v (n), block (n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
        block[i / k] = max (block[i / k], v[i]);
    }

    int m; cin >> m;

    while (m--){
        int a, b;
        cin >> a >> b;
        if (a > b) swap (a, b);
        a--, b--;
        int a_block = a / k;
        int b_block = b / k;
        ll ans = -1;
        
        int i = a;
        while (i / k == a_block && i <= b){
            ans = max (ans, v[i++]);
        }
        i = b;
        while (i / k == b_block && i >= a){
            ans = max (ans, v[i--]);
        }
        i = a_block + 1;
        while (i < b_block){
            ans = max (ans, block[i++]);
        }

        cout << ans << '\n';
    }
}
