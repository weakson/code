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

vector<vector<int> > rank;
vector<int> v;
int Max_r = -1;

void dfs (int rk, int Prev_rk, int Prev_idx){
    if (v.size() < rk - 1) return;
    int i = (rk == Prev_rk) ? Prev_idx : 0;
    for (; i < rank[rk].size(); i++){
        v.push_back (rank[rk][i]);
        dfs ()
    }
}

int main(){
    weakson;

    int n; cin >> n;
    
    vector<int> P(n), Rm(n);
    for (auto &i : P) cin >> i;

    rank.resize (n);
    rank[1].emplace_back (P[0]);
    Rm[1] = 1;

    for (int i = 1; i < n; i++){
        int r = 1, id = 1;
        for (int j = 0; j < i; j++){
            if (rank[P[i]] == rank[P[j]]) break;
            if (P[i] > P[j]) id = id * 2 + 1;
            else id = id * 2;
            r++;
        }
        rank[r].emplace_back (P[i]);
        Max_r = max (Max_r, r);
        Rm[P[i]] = id;
    }

}
