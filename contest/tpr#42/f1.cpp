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

    ll sum = n;
    for (int i = 1; i <= n - 1; i++){
        ll temp;
        cin >> temp;
        sum += i;
        sum -= temp;
    }

    cout << sum;

    return 0;
}
