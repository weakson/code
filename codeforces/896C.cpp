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

struct Node{
    int l, r;
    mutable ll v;
    bool operator< (const Node &o) const {
        return l < o.l;
    }
};

struct ODT{
    set<Node> tree;

    auto split (int x){
        auto it = tree.lower_bound ({x, 0, 0});
    }
};

int main(){
	weakson;
}
