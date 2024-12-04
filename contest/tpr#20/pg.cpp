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

bool cmp (pll a, pll b){
    // 原本順序為 (a, b)
    // 可想成 (a, b) 分別排在第一個和第二個
    // as 計算 (b, a) 時的煩躁度
    // bs 計算 (a, b) 時的煩躁度
    ll as = a.S * (a.S - 2) - b.F * (b.F + 5);
    ll bs = b.S * (b.S - 2) - a.F * (a.F + 5);
    // 若 as > bs 表示交換後煩躁度更大，則不需要交換
    return as > bs;
}

int main(){
	weakson;

    int n;
    cin >> n;
    vector<pll> v(n);
    for (int i = 0; i < n; i++) cin >> v[i].F;
    for (int i = 0; i < n; i++) cin >> v[i].S;

    sort (v.begin(), v.end(), cmp);
    ll sum = v[0].F * (v[0].F + 5);
    ll ans = 0;

    for (int i = 1; i < n; i++){
        ans += i * (v[i].S * (v[i].S - 2));
        ans -= sum;
        sum += v[i].F * (v[i].F + 5);
    }

    cout << ans << '\n';
}
