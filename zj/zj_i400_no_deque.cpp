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
    
    int m, n;
    cin >> m >> n;

    string e[105];

    for (int i = 0; i < m; i++){
        cin >> e[i];
    }

    string t;
    cin >> t;

    for (int i = m - 1; i >= 0; i--){

        int cnt = 0;
        string tmp;

        for (int j = n - 1; j >= 0; j--){
            if (e[i][j] - '0' == 0){
                tmp = t[j] + tmp;
            }
            else{
                tmp = tmp + t[j];
                cnt++;
            }
        }

        if (cnt % 2 == 1){
            
            int st;
            if (n % 2 == 0) st = n / 2;
            else st = n / 2 + 1;

            string Front, Back;
            Front = tmp.substr (0, n / 2);
            Back = tmp.substr (st, n / 2);

            if (n % 2 == 0) tmp = Back + Front;
            else tmp = Back + tmp[n / 2] + Front;
        }

        t = tmp;
    }

    cout << t << '\n';
}
