#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define pii pair<int, int>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

int main(){
	weakson;

    string s, t;
    cin >> s >> t;

    vector<int> v(s.size());

    for (int i = 0; i < s.size(); i++){
        if (s[i] == t[i]) v[i] = 0;
        else v[i] = 1;
    }

    vector<int> pre(s.size() + 1);
    pre[0] = 0;

    for (int i = 0; i < v.size(); i++){
        pre[i + 1] = pre[i] + v[i];
    }

    int q;
    cin >> q;

    while (q--){
        int l, r;
        cin >> l >> r;
        cout << pre[r] - pre[l - 1] << '\n';
    }

    return 0;
}
