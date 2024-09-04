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

    string s1, s2;
    cin >> s1 >> s2;
    
    string sa, sb;
    for (int i = 0; i < s1.size(); i++){
        if (s1[i] >= '0' && s1[i] <= '9'){
            if (sa.empty() && s1[i] == '0') continue;
            sa += s1[i];
        }
        else{
            sa += to_string((int)(s1[i] - 'A' + 1));
        }
    }
    for (int i = 0; i < s2.size(); i++){
        if (s2[i] >= '0' && s2[i] <= '9'){
            if (sb.empty() && s2[i] == '0') continue;
            sb += s2[i];
        }
        else{
            sb += to_string((int)(s2[i] - 'A' + 1));
        }
    }

    if (sa.empty()) sa += '0';
    if (sb.empty()) sb += '0';

    ll a = stoll (sa);
    ll b = stoll (sb);

    cout << a - b << '\n';

    return 0;
}
