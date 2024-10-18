#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define pii pair<int, int>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

ll n, k;
vector<ll> v;

bool check (ll x){
    ll j, cnt = 0;
    for (int i = 0; i < n; i = j){
        ll sum = 0;
        j = i;
        while (j < n && sum + v[j] <= x) sum += v[j++];
        cnt++;
    }
    return cnt <= k;
}

int main(){
	weakson;

    cin >> n >> k;
    v.resize (n);

    ll sum = 0;
    ll M = 0;
    for (int i = 0; i < n; i++){
        cin >> v[i];
        sum += v[i];
        M = max (M, v[i]);
    }

    ll p = sum;
    for (ll j = sum / 2; j > 0; j /= 2){
        while (p - j >= M && check (p - j)) p -= j;
    }

    cout << p << '\n';

}
