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

vector<string> v;
vector<vector<int> > ord;

void dfs (int idx){
    cout << v[idx];
    for (auto i : ord[idx]){
        dfs (i);
    }
}

int main(){
	weakson;

    int n, idx = 0;
    cin >> n;

    v.resize (n + 1);
    ord.resize (n + 1);

    for (int i = 1; i <= n; i++){
        cin >> v[i];
        idx += i;
    }

    int q = n - 1;
    while (q--){
        int a, b;
        cin >> a >> b;
        ord[a].emplace_back (b);
        idx -= b;
    }
    dfs (idx);
    cout << '\n';

    return 0;
}
