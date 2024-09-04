#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define pii pair<int, int>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

bool cmp (int a, int b){
    return a > b;
}

int main(){
	weakson;

    int n;
    cin >> n;

    vector<int> v(n);
    int sum = 0;
    for (int i = 0; i < n; i++){
        cin >> v[i];
        sum += v[i];
    }

    sort (v.begin(), v.end(), cmp);

    int cnt = 0;
    int x = 0;
    while (x * 2 <= sum && cnt < n){
        x += v[cnt++];
    }

    cout << cnt - 1 << '\n';

    return 0;
}
