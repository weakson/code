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

const int M = 32;

int main(){
	weakson;

    int n, q;
    cin >> n >> q;

    vector<ll> v[M];
    for (int i = 0; i < M; i++) v[i].resize (n);
    
    for (int i = 0; i < n; i++){
        cin >> v[0][i];
    }

    for (int i = 1; (1LL << i) <= n; i++){
        for (int j = 0; j < n; j++){
            v[i][j] = min (v[i - 1][j], v[i - 1][j + (1LL << i - 1)]);
        }
    }

    while (q--){
        int l, r;
        cin >> l >> r;
        l--, r--;
        int len = r - l + 1;
        int k = log2(len);
        cout << min (v[k][l], v[k][r - (1LL << k) + 1]) << '\n';       
    }
    
}
