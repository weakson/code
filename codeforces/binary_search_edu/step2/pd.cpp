#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define pii pair<int, int>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

const ll M = 1e8;
ll m, n;

struct node {
    ll t, z, y;
};

vector<node> v;

bool check (ll x){
    ll sum = 0;
    for (int i = 0; i < n; i++){
        ll tmp = v[i].t * v[i].z + v[i].y;
        sum += (x / tmp) * v[i].z;

        ll cnt = (x % tmp) / v[i].t;
        sum += min (cnt, v[i].z);
    }
    return sum >= m;
}

int main(){
	weakson;

    cin >> m >> n;

    v.resize (n);
    for (int i = 0; i < n; i++){
        cin >> v[i].t >> v[i].z >> v[i].y;
    }

    ll p = M;
    for (ll j = M / 2; j > 0; j /= 2){
        while (p - j >= 0 && check (p - j)) p -= j;
    }

    cout << p << '\n';

    ll tot = 0;
    for (int i = 0; i < n; i++){
        ll sum = 0;
        ll tmp = v[i].t * v[i].z + v[i].y;
        sum += (p / tmp) * v[i].z;

        ll cnt = (p % tmp) / v[i].t;
        sum += min (cnt, v[i].z);
        
        if (tot + sum > m){
            if (tot < m) cout << m - tot;
            else cout << 0;
        }
        else cout << sum;
        cout << " \n"[i == n - 1];

        tot += sum;
    }

    return 0;
}
