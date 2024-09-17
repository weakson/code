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

    int a, b, k;
    cin >> a >> b >> k;

    if (a > b) swap (a, b);

    if (abs (a - b) == k) cout << b + 1 << '\n';
    else {
        bool is_found = false;
        int x;
        for (x = a; x <= b; x++){
            if (abs (abs (a - x) - abs (b - x)) == k){
                is_found = true;
                break;
            }
        }
        if (is_found) cout << x << '\n';
        else cout << 1000000001 << '\n';
    }

    return 0;
}
