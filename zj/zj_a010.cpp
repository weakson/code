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

    int n;
    cin >> n;

    int prime_factor = 2;
    while (n != 1){
        int cnt = 0;
        while (n % prime_factor == 0){
            n /= prime_factor;
            cnt++;
        }
        if (cnt){
            cout << prime_factor;
            if (cnt != 1) cout << '^' << cnt;
            if (n != 1) cout << " * ";
            else cout << '\n';
        }
        prime_factor++;
    }
}
