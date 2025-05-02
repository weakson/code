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

string lltstr (ll n){
    char ret[1005];
    int pos = 0;
    while (n){
        ret[pos++] = (n % 10) + '0';
        n /= 10;
    }
    string ans;
    while (pos > 0) ans += ret[--pos];
    return ans;
}

int rec (string s, int dep){

    ll num = 0;
    for (int i = 0; i < s.size(); i++){
        num += s[i] - '0';
    }

    if (num % 9 != 0) return -1;
    if (s.size() == 1){
        return dep;
    }

    string tmp = lltstr(num);
    return rec (tmp, dep + 1);

}

int main(){
    // weakson;

    string s;

    while (cin >> s && s != "0"){
        int ans = rec(s, 0);
        if (ans == -1){
            cout << s << " is not a multiple of 9.\n";
        }
        else{
            cout << s << " is a multiple of 9 and has 9-degree ";
            if (ans == 0) cout << "1.\n";
            else cout << ans << ".\n";
        }
    }

}
