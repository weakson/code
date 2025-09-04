#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define pii pair<int, int>
#define swap(a,b) a ^= b ^= a ^= b
#define dbg(x) cout << #x << " = " << x << endl;
#define OUT 0
#define IN 1
using namespace std;

int n;
bitset<100> ring;

void f (int N, bool op){
    if (N == 1){
        cout << "Move ring 1 " << (op ? "in" : "out") << '\n';
        ring[1] = op;
        return;
    }
    if (ring[N - 1] == OUT){
        f (N - 1, IN);
    }
    for (int i = N - 2; i >= 1; i--){
        if (ring[i] == IN){
            f (i, OUT);
        }
    }
    cout << "Move ring " << N << (op ? " in" : " out") << '\n';
    ring[N] = op;
}

int main(){
    weakson;

    cin >> n;
    ring.set();
    
    for (int i = n; i >= 1; i--){
        if (ring[i] == IN){
            f (i, OUT);
        }
    }
}
