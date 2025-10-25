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

    int t, n;

    while (cin >> t >> n && n != 0){
        vector<int> v(n);
        for (auto &i : v) cin >> i;

        set<vector<int>, greater<vector<int> > > ans;

        for (int i = 0; i < (1LL << n); i++){
            int sum = 0;
            vector<int> tmp;
            for (int j = 0; j < n; j++){
                if (i & (1LL << j)){
                    sum += v[j];
                    tmp.emplace_back (v[j]);
                }
            }
            if (sum == t) ans.insert (tmp);
        }

        cout << "Sums of " << t << ":\n";
        if (ans.size() == 0) cout << "NONE\n";
        else{
            for (auto vtmp : ans){
                for (int i = 0; i < vtmp.size(); i++){
                    cout << vtmp[i] << "+\n"[i == vtmp.size() - 1];
                }
            }
        }
    }
}
