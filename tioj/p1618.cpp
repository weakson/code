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

    int n, k;
    cin >> n >> k;

    vector<ll> h(n), b(n);

    for (auto &i : h) cin >> i;
    for (auto &i : b) cin >> i;

    ll idx = 0, Max = -1e18, sum = 0;
    deque<int> dq;

    for (int i = 0; i < n; i++){

        while (!dq.empty() && h[i] > h[dq.back()]){
            sum -= b[dq.back()];
            dq.pop_back();
        }

        dq.push_back (i);
        sum += b[i];

        while (!dq.empty() && dq.front() <= i - k){
            sum -= b[dq.front()];
            dq.pop_front();
        }

        if (sum > Max){
            Max = sum;
            idx = i + 1;
        }
    }

    cout << idx << ' ' << Max << '\n';

}
