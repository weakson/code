#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define pii pair<int, int>
#define swap(a,b) a ^= b ^= a ^= b
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

int main(){
    weakson;

    int cup[3], w[3], h[3];
    int n;
    cin >> n >> w[1] >> w[2] >> h[1] >> h[2];

    for (int i = 1; i <= 2; i++) cup[i] = w[i] * w[i] * h[i];
    int i = 1;
    int ans = -1;

    while (n--){
        int v;
        cin >> v;

        if (i == 3) continue;

        int high = 0;

        if (v > cup[i]){

            high += cup[i] / (w[i] * w[i]);
            cup[i] = 0;
            v -= cup[i];

            i++;
            if (i == 3) continue;

            high += min (v / (w[i] * w[i]), h[i]);
            cup[i] -= v;
            if (cup[i] <= 0) i++;
        }
        else{
            high += v / (w[i] * w[i]);
            cup[i] -= v;
            if (cup[i] == 0) i++;
        }

        ans = max (ans, high);
    }

    cout << ans << '\n';
}
