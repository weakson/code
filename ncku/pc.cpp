#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define pii pair<int, int>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

ll cnt[4][5000005];

int main(){
	weakson;

    ll n, k, MAX = 0;
    cin >> n >> k;

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < n; j++){
            ll tmp; cin >> tmp;
            MAX = max (MAX, tmp);
            for (int k = 1; k * k <= tmp; k++){
                if (tmp % k == 0){
                    if (k * k == tmp) cnt[i][k]++;
                    else{
                        cnt[i][k]++;
                        cnt[i][tmp / k]++;
                    }
                }
            }
        }
    }

    ll sum = 0, t = 0;

    for (int i = MAX; i >= 1; i--){
        __int128 tc = 1;
        for (int j = 0; j < 4; j++){
            tc *= cnt[j][i];
        }
        if (t + tc >= k){
            sum += (k - t) * i;
            break;
        }
        else{
            t += tc;
            sum += tc * i;
        }
        dbg (i);
        // dbg (tc);
        dbg (sum);
        cout << '\n';
    }
    cout << sum << '\n';

    return 0;
}
