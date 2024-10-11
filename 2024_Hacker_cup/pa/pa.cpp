#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define pii pair<int, int>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

const ll M = 2e6;
const double eps = 1e-6;

int main(){
	weakson;

    int t;
    cin >> t;

    for (int ti = 1; ti <= t; ti++){
        cout << "Case #" << ti << ": ";

        int n;
        cin >> n;

        double amax = M, bmax = -1;
        bool is_good = true;
        for (int i = 1; i <= n; i++){
            int a, b;
            cin >> a >> b;

            double ta;
            if (a == 0) ta = M;
            else ta = (double)(i) / (double)(a);
            double tb = (double)(i) / (double)(b);

            if (i > 1 && tb - amax > eps) is_good = false;
            
            bmax = max (bmax, tb);
            amax = min (amax, ta);
        }

        if (is_good) cout << fixed << setprecision(6) << bmax << '\n';
        else cout << "-1\n";
    }

    return 0;
}
