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

    int n; cin >> n;

    string str[205];
    int Max_len = -1;
    for (int i = 0; i < n; i++){
        cin >> str[i];
        Max_len = max(Max_len, (int)str[i].size());
    }

    vector<char> v;
    for (int i = 0; i < Max_len; i++){
        for (int j = 0; j < n; j++){
            if (i < str[j].size() && str[j][i] >= 'A' && str[j][i] <= 'Z')
                v.emplace_back (str[j][i]);
        }
    }

    for (auto i : v) cout << i;
    cout << '\n';
}
