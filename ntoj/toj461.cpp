#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

int main(){
	weakson;

    double x;
    cin >> x;
    
    int n = x * 2;

    int cnt = 0;
    for (int i = 0; i < 24 * 60 * 2; i++){
        if ((i * 11) % 720 == 2 * n) cnt ++;
    }
    cout << cnt << '\n';
}
