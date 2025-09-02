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

    int n;
    cin >> n;

    // {checkin, {checkout, id}}
    vector<pair<ll, pll> > v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i].F >> v[i].S.F;
        v[i].S.S = i;
    }

    sort (v.begin(), v.end());

    // {checkout, id}
    priority_queue<pll, vector<pll>, greater<pll> > hotel_list;
    priority_queue<int, vector<int>, greater<int> > room_left;
    vector<int> ans(n);
    int cnt = 0, k = -1;
    
    for (int i = 1; i <= n; i++) room_left.push(i);

    for (int i = 0; i < n; i++){
        while (!hotel_list.empty() && hotel_list.top().F < v[i].F){
            room_left.push (ans[hotel_list.top().S]);
            hotel_list.pop();
            cnt--;
        }
        hotel_list.emplace (v[i].S);
        ans[v[i].S.S] = room_left.top();
        room_left.pop();
        cnt++;
        k = max (k, cnt);
    }

    cout << k << '\n';
    for (auto i : ans) cout << i << ' ';
    cout << '\n';
}
