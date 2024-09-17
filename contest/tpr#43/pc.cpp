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

    ll n;
    cin >> n;
    
    vector<ll> v(n + 1);
    for (int i = 1; i <= n; i++) cin >> v[i];

    ll sum = ((n - 1) * n) / 2;
    ll cnt = 0;
    vector<ll> b(n + 1, n - 1);
    for (int i = 1; i <= n; i++){
        for (int j = i + 1; j <= n; j++){
            if (v[j] < v[i]){
                if (sum > n - 1 && b[i] > 1 && b[j] > 1){
                    b[i]--;
                    b[j]--;
                    sum--;
                }
                else cnt++;
            }
        }
    }
    
    cout << cnt << '\n';
}
