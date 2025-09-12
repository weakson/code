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

const int L, U, R, D;
L = 0, U = 1, R = 2, D = 3;

int dr = {0, -1, 0, 1};
int dc = {-1, 0, 1, 0};

string s;
ll ans = 0;
bool vis[10][10];

void dfs (int r, int c, int id){
    if (r == 6 && c == 0){
        if (id == 48) ans++;
        return;
    }
    if (s[id] == 'L') dfs (r + dr[L], c + dc[L], id + 1);
    else if (s[id] == 'U') dfs (r + dr[U], c + dc[U], id + 1);
    else if (s[id] == 'U') dfs (r + dr[U], c + dc[U], id + 1);
    else if (s[id] == 'U') dfs (r + dr[U], c + dc[U], id + 1);
}

int main(){
    weakson;

    cin >> s;

}
