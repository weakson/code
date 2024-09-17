#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define pii pair<int, int>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

vector<ll> v, seg;

void build (int id, int l, int r){
    if (l == r){
        seg[id] = v[l];
        return;
    }

    int mid = (l + r) / 2;

    build (id * 2, l, mid);
    build (id * 2 + 1, mid + 1, r);

    seg[id] = seg[id * 2] | seg[id * 2 + 1];

    return;
}

ll query (int id, int l, int r, int ql, int qr){
    if (l >= ql && r <= qr) return seg[id];

    int mid = (l + r) / 2;

    if (qr <= mid) return query (id * 2, l, mid, ql, qr);
    else if (ql > mid) return query (id * 2 + 1, mid + 1, r, ql, qr);
    else{
        ll a = query (id * 2, l, mid, ql, qr);
        ll b = query (id * 2 + 1, mid + 1, r, ql, qr);
        return (a | b);
    }
}

int main(){
	weakson;

    int n;
    cin >> n;

    v.resize(n + 1);
    seg.resize(4 * n);

    for (int i = 1; i <= n; i++) cin >> v[i];

    build (1, 1, n);

    int q;
    cin >> q;

    while (q--){
        int l, r;
        cin >> l >> r;
        cout << query (1, 1, n, l, r) << '\n';
    }

    return 0;
}
