#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define pii pair<int, int>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

bitset<2505> v[2505];

int main(){
	weakson;

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++){
        int d; cin >> d;
        while (d--){
            int temp; cin >> temp;
            v[i][temp] = true;
        }
    }

    ll ans = 0;
    for (int i = 1; i <= n; i++){
        for (int j = i + 1; j <= n; j++){
            bitset<2505> temp = v[i] & v[j];
            ans += temp.any();
        }
    }

    cout << ans << '\n';

    return 0;
}
