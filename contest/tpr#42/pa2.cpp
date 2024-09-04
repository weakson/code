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

    int n;
    cin >> n;

    vector<pll> v(n);
    for (int i = 0; i < n; i++) cin >> v[i].F;
    for (int i = 0; i < n; i++) cin >> v[i].S;

    pll Ma = {-500, 0}, Mb = {-500, 0};
    pll Sa = {-500, 0}, Sb = {-500, 0};

    ll ans = 0, a = 0, b = 0;
    for (int i = 0; i < n; i++){
        if (v[i].F >= v[i].S && v[i].F >= 0){
            ans += v[i].F;
            Sb = max (Sb, {v[i].S - v[i].F, i});
            a++;
        }
        else if (v[i].S > v[i].F && v[i].S >= 0){
            ans += v[i].S;
            Sa = max (Sa, {v[i].F - v[i].S, i});
            b++;
        }
        else{
            Sa = max (Sa, {v[i].F, i});
            Sb = max (Sb, {v[i].S, i});
        }
        if (Sa.F > Ma.F) swap (Sa, Ma);
        if (Sb.F > Mb.F) swap (Sb, Mb);
    }

    if (!a && !b){
        if (Ma.S == Mb.S){
            ans += max (Ma.F + Sb.F, Sa.F + Mb.F);
        }
        else{
            ans += Ma.F + Mb.F;
        }
    }
    else if (!a){
        ans += Ma.F;
    }
    else if (!b){
        ans += Mb.F;
    }
    
    cout << ans << '\n';

    return 0;
}
