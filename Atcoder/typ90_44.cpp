#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

int n, q;

int main(){
	weakson;

    cin >> n >> q;
    vector<int> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }

    int cnt = 0;
    while (q--){
        int t, x, y;
        cin >> t >> x >> y;
        int ida, idb;
        int tmp = cnt % n;
        ida = x - tmp;
        idb = y - tmp;
        dbg (ida);
        dbg (idb);
        if (t == 1){
            swap (v[ida], v[idb]);
        }
        else if (t == 2) cnt++;
        else{
            cout << v[ida] << '\n';
        }
    }

    return 0;
}
