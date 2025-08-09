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

    set<ll> s;
    ll i = 1;

    while (s.size() != 1500){
        ll tmp = i;
        while (tmp % 2 == 0) tmp /= 2;
        while (tmp % 3 == 0) tmp /= 3;
        while (tmp % 5 == 0) tmp /= 5;
        if (tmp == 1) s.insert (i);
        i++;
    }

    cout << *--s.end() << '\n';
}
