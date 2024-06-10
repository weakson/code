#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

int main(){
	weakson;

    int n;
    while (cin >> n){
        if (n == 0) break;
        vector<int> v(n);
        for (int i = 0; i < n; i++){
            cin >> v[i];
        }
        sort (v.begin(), v.end());
        for (int i = 0; i < v.size(); i++){
            cout << v[i];
            if (i != v.size() - 1) cout << ' ';
        }
        cout << '\n';
    }
    return 0;
}
