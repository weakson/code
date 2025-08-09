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

    int G;
    cin >> G;

    vector<int> SIN(G);
    int Max = -1;
    for (int i = 0; i < G; i++){
        cin >> SIN[i];
        Max = max (Max, SIN[i]);
    }

    int m = G;

    while (m <= Max){
        set<int> s;
        for (int i = 0; i < G; i++){
            s.insert (SIN[i] % m);
        }

        if (s.size() == G) break;

        m++;
    }

    cout << m << '\n';
}
