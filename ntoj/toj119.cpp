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

    int n;
    cin >> n;

    int arr[200005];
    for (int i = 1; i <= n; i++) cin >> arr[i];

    int q;
    cin >> q;

    bool is_ok = true;
    while (q--){
        int a, b;
        cin >> a >> b;
        if (abs (a - b) > 8){
            is_ok = false;
            break;
        }
        swap (arr[a], arr[b]);
    }

    if (!is_ok) cout << "I QUIT!\n";
    else cout << "SORTED!\n";

    for (int i = 1; i <= n; i++){
        cout << arr[i] << " \n"[i == n];
    }
}
