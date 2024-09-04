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

    int n, k;
    cin >> n >> k;

    vector<ll> v(n);

    for (int i = 0; i < n; i++) cin >> v[i];

    while (k--){
        int x;
        cin >> x;

        int pos = 0;
        for (int j = n / 2; j > 0; j /= 2){
            while (pos + j < n && v[pos + j] < x){
                pos += j;
            }
        }

        if (v[0] == x) cout << "YES\n";
        else if (v[pos + 1] == x) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
