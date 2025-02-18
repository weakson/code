#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define pii pair<int, int>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

void print_line (int n, int i){
    for (int j = 0; j < n - i; j++) cout << ' ';
    for (int j = 0; j < 2 * i - 1; j++) cout << '*';
    cout << '\n';
    return;
}

int main(){
	weakson;

    int t;
    cin >> t;

    while (t--){
        int n;
        cin >> n;

        for (int i = 1; i <= n; i++){
            if (i == n - 2){
                print_line (n, n);
            }
            else {
                print_line (n, i);
            }
        }

        for (int i = n - 3; i >= 1; i--){
            print_line (n, i);
        }
    }
}
