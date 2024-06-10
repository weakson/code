#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define pii pair<int, int>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

vector<ll> v (1000005, 1e18);

int main(){
	weakson;

    int n;
    cin >> n;

    for (int i = 0; i <= 9; i++) v[i] = 1;

    for (int i = 10; i <= n; i++){
        int temp = i;
        queue<int> q;
        while (temp){
            q.push (temp % 10);
            temp /= 10;
        }
        while (!q.empty()){
            v[i] = min (v[i], v[i - q.front()] + 1);           
            q.pop();
        }
    }

    cout << v[n] << '\n';

    return 0;
}
