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

    int cnt = 0;

    for (int i = 5; i <= n; i += 5){
        int num = i;
        while (num % 5 == 0){
            num /= 5;
            cnt++;
        }
    }

    cout << cnt << '\n';
}
