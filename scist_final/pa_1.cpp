#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define pii pair<int, int>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

vector<ll> v;

int main(){
	weakson;

    int n, k;
    cin >> n >> k;
    v.resize(n);

    for (int i = 0; i < n; i++){
        cin >> v[i];
    }

    int l = -1, r = -1;
    for (int i = 0; i < n; i++){
        ll sum = 0;
        for (int j = i; j < n; j++){
            sum ^= v[j];
            if (sum == k){
                l = i + 1;
                r = j + 1;
            }
        }
        if (l > 0 || r > 0) break;
    }

    if (l == -1) cout << "NO\n";
    else{
        cout << "YES\n";
        cout << l << ' ' << r << '\n';
    }
    
    return 0;
}
