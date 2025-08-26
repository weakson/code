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

    int T;
    cin >> T;

    while (T--){
        int n;
        cin >> n;

        set<int> s;

        for (int i = 0; i < n; i++){
            int tmp; cin >> tmp;
            s.insert (tmp);
        }

        if (s.size() == n) cout << "NO\n";
        else cout << "YES\n";
    }
}
