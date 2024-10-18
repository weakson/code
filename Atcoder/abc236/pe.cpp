#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define pii pair<int, int>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

ll n;
vector<ll> v;
const double eps = 1e-6;

bool check_avg (double x){
    vector <double> dp[2];
    dp[0].resize (n);
    dp[1].resize (n);

    dp[1][0] = v[0] - x;

    for (int i = 1; i < n; i++){
        dp[0][i] = dp[1][i - 1];
        dp[1][i] = max (dp[0][i - 1], dp[1][i - 1]) + v[i] - x;
    }

    return (max(dp[0][n - 1], dp[1][n - 1]) >= 0);
}

bool check_med (ll x){
    vector<ll> dp[2];
    dp[0].resize (n);
    dp[1].resize (n);

    dp[1][0] = ((v[0] >= x) ? 1 : -1);
    
    for (int i = 1; i < n; i++){
        dp[0][i] = dp[1][i - 1];
        dp[1][i] = max (dp[0][i - 1], dp[1][i - 1]) + ((v[i] >= x) ? 1 : -1);
    }

    return (max (dp[0][n - 1], dp[1][n - 1]) > 0);
}

int main(){
	weakson;

    cin >> n;
    v.resize(n);

    ll M = 0;
    for (int i = 0; i < n; i++){
        cin >> v[i];
        M = max (M, v[i]);
    }

    // Average binary search
    double avg = 1;
    for (double j = M / 2; j > eps; j /= 2){
        while (avg + j <= M && check_avg (avg + j)) avg += j;
    }
    cout << fixed << setprecision (6) << avg << '\n';

    // Median binary search
    ll med = 1;
    for (ll j = M / 2; j > 0; j /= 2){
        while (med + j <= M && check_med (med + j)) med += j;
    }
    cout << med << '\n';

    return 0;
}
