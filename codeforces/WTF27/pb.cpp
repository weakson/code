#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define pii pair<int, int>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

const int M = 5e6;
int ans = 1e9;
vector<int> v, cnt(7500005);
int m;

void solve (int i, int pos, int d){
    if (i == m){
        ans = min (ans, d);
        return;
    }

    cnt[M + pos + v[i]]++;
    solve (i + 1, pos + v[i], d + (cnt[M + pos + v[i]] == 1));
    cnt[M + pos + v[i]]--;

    cnt[M + pos - v[i]]++;
    solve (i + 1, pos - v[i], d + (cnt[M + pos - v[i]] == 1));
    cnt[M + pos - v[i]]--;

    return;
}

int main(){
	weakson;

    cin >> m;
    v.resize (m);

    for (int i = 0; i < m; i++){
        cin >> v[i];
    }

    cnt[M] = 1;
    solve (0, 0, 1);

    cout << ans << '\n';

    return 0;
}
