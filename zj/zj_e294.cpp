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
    //weakson;

    ll n;

    while (cin >> n){
        ll hi_pow = 0, hi_num = -1, l_num;
        ll p = 1;
        while (p <= n){
            ll tmp = n / p % 10;
            if (tmp % 2 == 0){
                hi_pow = p;
                hi_num = tmp;
                l_num = n / p / 10 * p * 10;
            }
            p *= 10;
        }
        if (hi_num == -1){
            cout << 0 << '\n';
            continue;
        }
        if (hi_num != 0){
            ll a = l_num, b = l_num;
            a += hi_pow * (hi_num - 1);
            b += hi_pow * (hi_num + 1);
            ll ptr = 1;
            while (a / ptr % 10 == 0){
                a += ptr * 9;
                b += ptr;
                ptr *= 10;
            }
            cout << min(abs(n - a), abs(n - b)) << '\n';
        }
        else{
            if (l_num / hi_pow == 10){
                ll a = 9 * hi_pow;
                ll b = l_num;
                b += hi_pow;
                ll ptr = 1;
                while (a / ptr % 10 == 0){
                    a += ptr * 9;
                    b += ptr;
                    ptr *= 10;
                }
                cout << min(abs(n - b), abs (n - a)) << '\n';
            }
            else{
                ll a = l_num;
                a += hi_pow;
                ll ptr = 1;
                while (a / ptr % 10 == 0){
                    a += ptr;
                    ptr *= 10;
                }
                cout << abs (n - a) << '\n';
            }
        }
    }
}
