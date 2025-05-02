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

    int h, w, n;
    cin >> h >> w >> n;

    int arr[25][25] = {};

    for (int i = 0; i < n; i++){
        int r, c, t, x;
        cin >> r >> c >> t >> x;
        for (int j = 0; j < h; j++){
            for (int k = 0; k < w; k++){
                if (abs (j - r) + abs (k - c) <= t){
                    arr[j][k] += x;
                }
            }
        }
    }

    for (int i = 0; i < h; i++){
        for (int j = 0; j < w; j++){
            cout << arr[i][j] << ' ';
        }
        cout << '\n';
    }
}
