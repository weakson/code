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

    int t;
    cin >> t;

    while (t--){
        int n;
        cin >> n;

        vector<string> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];

        for (int i = n - 1; i >= 0; i--){
            for (int j = 0; j < 4; j++){
                if (v[i][j] == '#') cout << j + 1 << ' ';
            }
        }

        cout << '\n';

    }

    return 0;
}
