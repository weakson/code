#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define pii pair<int, int>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

int n, a, b, k;
string s;
vector<int> t(500005);

int main(){
	weakson;
    
    cin >> n >> a >> b >> k;

    cin >> s;

    for (int i = 0; i < n; i++) cin >> t[i];

    ll sum = 0, cnt = 0;
    for (int i = 0; i < n; i++){
        if (s[i] == '1') cnt++;
        else{
            sum += cnt / b;
            cnt = 0;
        }
        if (i == n - 1 && cnt) sum += cnt / b;
    }

    ll ans = sum - a + 1;

    cout << ans << '\n';
    
    return 0;
}
