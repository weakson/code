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

void print_space (int n){
    if (n < 10) cout << "    ";
    else if (n < 100) cout << "   ";
    else if (n < 1000) cout << "  ";
    else if (n < 10000) cout << " ";
    cout << n << "  ";
    return;
}

int main(){
	weakson;

    int n;
    cout << "PERFECTION OUTPUT\n";

    while (cin >> n && n != 0){
        print_space (n);

        if (n == 1){
            cout << "DEFICIENT\n";
            continue;
        }

        int ans = 1;
        for (int i = 2; i * i <= n; i++){
            if (i * i == n) ans += i;
            else if (n % i == 0){
                ans += i;
                ans += n / i;
            }
        }

        if (ans == n) cout << "PERFECT\n";
        else if (ans > n) cout << "ABUNDANT\n";
        else cout << "DEFICIENT\n";
    }

    cout << "END OF OUTPUT\n";

    return 0;
}
