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
set<ll> s;

int main(){
	weakson;

    cin >> n >> k;

    vector<ll> pre(n + 1);

    pre[0] = 0;
    for (int i = 1; i <= n; i++){
        int temp;
        cin >> temp;
        pre[i] = pre[i - 1] ^ temp;
    }

    s.insert (0);

    ll num = -1, l, r;
    for (int i = 1; i <= n; i++){
        if (s.find ((pre[i] ^ k)) != s.end()){
            num = pre[i] ^ k;
            r = i;
            break;
        }
        s.insert (pre[i]);
    }

    for (int i = 0; i <= n; i++){
        if (pre[i] == num){
            l = i + 1;
            break;
        }
    }

    if (num == -1) cout << "NO\n";
    else{
        cout << "YES\n";
        cout << l << ' ' << r << '\n';
    }

    return 0;
}
