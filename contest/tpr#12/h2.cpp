#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define pii pair<int, int>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

int ans;

bool cmp (int x, int y, int z){
    int i = x + y;
    int j = x + z;
    int k = y + z;
    return ((i > z) && (j > y) && (k > x));
}

void solve (int x, int y, int z){
    
    int sum = 0;
    bitset<3> bs;
    bs.reset();

    if (x & 1) bs[0] = 1;
    if (y & 1) bs[1] = 1;
    if (z & 1) bs[2] = 1;

    if (bs.count() == 2) sum += 1;
    else if (bs.count() == 1) sum += 2;
    else sum += 5;

    if (bs[0] && bs[1]) sum += 5;
    if (bs[1] && bs[2]) sum += 5;

    if (!(bs[0] || bs[1])) sum += 5;
    if (!(bs[1] || bs[2])) sum += 5;

    if (x + z > y) sum += 5;

    if (cmp(x, y, z)) sum += 7;

    ans = max (sum, ans);
}

int main(){
	weakson;

    int a, b, c;
    cin >> a >> b >> c;

    solve (a, b, c);
    solve (a, c, b);
    solve (b, a, c);
    solve (b, c, a);
    solve (c, a, b);
    solve (c, b, a);

    cout << ans << '\n';
    
    return 0;
}
