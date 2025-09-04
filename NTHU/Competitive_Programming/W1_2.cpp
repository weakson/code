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

void Hanoi (int N, int from, int to, int tmp){
    if (N == 1){
        cout << from << ' ' << to << '\n';
        return;
    }
    Hanoi (N - 1, from, tmp, to);
    cout << from << ' ' << to << '\n';
    Hanoi (N - 1, tmp, to, from);
}

int main(){
    weakson;

    int n;
    cin >> n;

    cout << (1LL << n) - 1 << '\n';

    Hanoi (n, 1, 3, 2);
}
