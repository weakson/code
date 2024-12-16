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

struct node{
    ll tag, val;
};

struct segment_tree{
    vector<node> sum;

    segment_tree (int n){
        sum.resize (4 * n);
    }

    ll pull (int id){
        return sum[id * 2].val + sum[id * 2 + 1].val;
    }

    void push_tag (int id, int l, int r){
        sum[id].val += (r - l + 1) * sum[id].tag;
        sum[id * 2].tag += sum[id].tag;
        sum[id * 2 + 1].tag += sum[id].tag;
        sum[id].tag = 0;
        return;
    }

    void build (int id, int l, int r, vector<ll> &v){
        if (l == r){
            sum[id].val = v[l];
            return;
        }

        int mid = l + r >> 1;
        build (id * 2, l, mid, v);
        build (id * 2 + 1, mid + 1, r, v);
        sum[id].val = pull (id);
        return;
    }

    void modify (int id, int l, int r, int ql, int qr, int x){
        if (r < ql || l > qr) return;
        if (l >= ql && r <= qr){
            sum[id].val = x;
            return;
        }

        int mid = l + r >> 1;
        modify (id * 2, l, mid, ql, qr, x);
        modify (id * 2 + 1, mid + 1, r, ql, qr, x);
        sum[id].val = pull (id);
        return;
    }

    ll query (int id, int l, int r, int ql, int qr){
        if (r < ql || l > qr) return 0;
        if (l >= ql && r <= qr){
            if (sum[id].tag) push_tag (id, l, r);
            return sum[id].val;
        }

        int mid = l + r >> 1;
        ll a = 0, b = 0;
        if (qr <= mid) a = query (id * 2, l, mid, ql, qr);
        else if (ql > mid) b = query (id * 2 + 1, mid + 1, r, ql, qr);
        else{
            a = query (id * 2, l, mid, ql, qr);
            b = query (id * 2 + 1, mid + 1, r, ql, qr);
        }
        return a + b;
    }
};

int main(){
	weakson;

    int n, q;
    cin >> n >> q;

    segment_tree seg(n);
    vector<ll> v(n + 1);

    for (int i = 1; i <= n; i++) cin >> v[i];

    seg.build (1, 1, n, v);

    while (q--){
        int t;
        cin >> t;
        if (t == 1){
            ll k, u;
            cin >> k >> u;
            seg.modify (1, 1, n, k, k, u);
        }
        else{
            int a, b;
            cin >> a >> b;
            ll ans = seg.query (1, 1, n, a, b);
            cout << ans << '\n';
        }
    }
}
