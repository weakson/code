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
        cin >>n;

        if (n < 4) cout << "-1\n";
        else {
            deque<int> ans = {2, 4, 1, 3};
            for (int i = 5; i <= n; i++){
                if (i & 1) ans.push_back (i);
                else ans.push_front (i);
            }
            for (int i : ans) cout << i << ' ';
            cout << '\n';
        }
    }
    return 0;
}
