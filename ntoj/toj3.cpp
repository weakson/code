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

    int t;
    cin >> t;

    while (t--){
        int a, b;
        cin >> a >> b;
        while (b != 0){
            int temp = b;
            b = a % b;
            a = temp;
        }
        cout << a << '\n';
    }
}
