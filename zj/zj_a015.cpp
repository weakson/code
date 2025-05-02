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
    //weakson;

    int n, m;

    while (cin >> n >> m){
        int arr[105][105];
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                cin >> arr[i][j];
            }
        }

        for (int j = 0; j < m; j++){
            for (int i = 0; i < n; i++){
                cout << arr[i][j] << ' ';
            }
            cout << '\n';
        }
    }
}
