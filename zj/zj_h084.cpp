#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define pii pair<int, int>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

int n, k;
vector<ll> v, p;

bool check (ll x){
    queue<ll> q;
    for (int i = 0; i < n; i++){
        if (v[i] >= x){
            ll j = i, cnt = 0;
            while (j < n && v[j] >= x) j++, cnt++;
            i = j;
            q.push (cnt);
        }
    }
    int i = 0;
    while (!q.empty() && i < k){
        ll sum = 0;
        while (i < k && sum + p[i] <= q.front()){
            sum += p[i++];
        }
        q.pop();
    }
    if (i == k) return true;
    return false;
}

int main(){
	weakson;

    cin >> n >> k;
    v.resize (n);
    p.resize (k);

    ll M = -1;
    for (int i = 0; i < n; i++) cin >> v[i], M = max (M, v[i]);
    for (int i = 0; i < k; i++) cin >> p[i];

    ll h = 0;
    for (ll j = M / 2; j > 0; j /= 2){
        while (h + j <= M && check (h + j)) h += j;
    }

    cout << h << '\n';

    return 0;
}
