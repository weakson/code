#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

int main(){
	weakson;

    int n, q;
    while (cin >> n >> q){

        vector<ll> v;
        for (int i = 0; i < n; i++){
            ll temp; cin >> temp;
            v.emplace_back (temp);
        }

        sort (v.begin(), v.end());

        while (q--){
            ll p; cin >> p;
            ll ans = upper_bound (v.begin(), v.end(), p) - v.begin();

            if (ans & 1) cout << "1\n";
            else cout << "0\n";
        }
    }

    return 0;
}
