#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define pii pair<int, int>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

vector<int> cnt(2e5);

int main(){
	weakson;

    int n, M;
    cin >> n;

    for (int i = 0; i < n; i++){
        int s;
        cin >> s;
        M = max (M, s);
        for (int j = 1; j * j <= s; j++){
            if (j * j == s){
                cnt[j]++;
            }
            else if (s % j == 0){
                cnt[s / j]++;
                cnt[j]++;
            }
        }
    }

    int ans = 0;

    for (int i = 2; i <= M; i++) ans = max (ans, cnt[i]);

    cout << ((ans == 0) ? 1 : ans) << '\n';

    return 0;
}
