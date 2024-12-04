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

int N;
int ans[3000][3000];

/*
t == 0; left
t == 1; up
t == 2; right
t == 3; down
*/

void sol (int l, int u, int r, int d, int x, int t){
    if (l + 1 == r){
        ans[l][u] = x;
        return;
    }
    int mid = r - l >> 1;
    int tmp = mid * mid;
    if (t == 0){ // left
        sol (l, u, r - mid, d - mid, x, 1);
        sol (l + mid, u, r, d - mid, x + tmp * 1, 0);
        sol (l + mid, u + mid, r, d, x + tmp * 2, 0);
        sol (l, u + mid, r - mid, d, x + tmp * 3, 3);
    }
    else if (t == 1){ // up
        sol (l, u, r - mid, d - mid, x, 0);
        sol (l, u + mid, r - mid, d, x + tmp * 1, 1);
        sol (l + mid, u + mid, r, d, x + tmp * 2, 1);
        sol (l + mid, u, r, d - mid, x + tmp * 3, 2);
    }
    else if (t == 2){ // right
        sol (l + mid, u + mid, r, d, x, 3);
        sol (l, u + mid, r - mid, d, x + tmp * 1, 2);
        sol (l, u, r - mid, d - mid, x + tmp * 2, 2);
        sol (l + mid, u, r, d - mid, x + tmp * 3, 1);
    }
    else{ // down
        sol (l + mid, u + mid, r, d, x, 2);
        sol (l + mid, u, r, d - mid, x + tmp * 1, 3);
        sol (l, u, r - mid, d - mid, x + tmp * 2, 3);
        sol (l, u + mid, r - mid, d, x + tmp * 3, 0);
    }
}

int main(){
	weakson;

    cin >> N;

    int tmp = (1LL << N);

    sol (0, 0, tmp, tmp, 0, 1);

    for (int i = 0; i < tmp; i++){
        for (int j = 0; j < tmp; j++){
            cout << ans[j][i] << ' ';
        }
        cout << '\n';
    }

    return 0;
}
