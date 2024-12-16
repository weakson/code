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

struct segment_tree{
    vector<ll> v;

    segment_tree (int n){
        v.resize (4 * n);
    }

    void pull (int id){
        v[id] = max (v[id * 2], v[id * 2 + 1]);
    }

    void build (int id, int l, int r, vector<ll> &tmp){
        if (l == r){
            v[id] = tmp[l];
            return;
        }

        int mid = (l + r) / 2;
        build (id * 2, l, mid, tmp);
        build (id * 2 + 1, mid + 1, r, tmp);
        pull (id);
    }

    int query (int id, int l, int r, int x){
        if (l == r){
            if (v[id] < x) return 0;
            v[id] -= x;
            return l;
        }

        int mid = (l + r) / 2;
        int a = 0, b = 0;
        if (v[id * 2] >= x) a = query (id * 2, l, mid, x);
        else if (v[id * 2 + 1] >= x) b = query (id * 2 + 1, mid + 1, r, x);
        else return 0;
        pull (id);
        return max (a, b);
    }
};

int main(){
	weakson;

    int n, m;
    cin >> n >> m;

    vector<ll> a(n + 1);
    for (int i = 1; i <= n; i++) cin >> a[i];

    segment_tree seg(n);
    seg.build (1, 1, n, a);

    while (m--){
        int r;
        cin >> r;
        cout << seg.query (1, 1, n, r) << " \n"[m == 0];
    }

    return 0;
}
