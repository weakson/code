#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define pii pair<int, int>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

vector<pii> v(3);
int ans = -500;

void sol(int num, int sum, int a, int b){
    if (num == 3){
        if (a > 0 && b > 0){
            ans = max (ans, sum);
        }
        return;
    }
    sol (num + 1, sum, a, b);
    sol (num + 1, sum + v[num].F, a + 1, b);
    sol (num + 1, sum + v[num].S, a, b + 1);

    return;
}

int main(){
	weakson;

    for (int i = 0; i < 3; i++) cin >> v[i].F;
    for (int i = 0; i < 3; i++) cin >> v[i].S;

    sol (0, 0, 0, 0);

    cout << ans << '\n';
    
    return 0;
}
