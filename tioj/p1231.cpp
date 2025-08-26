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

    priority_queue<pii> pq;

    for (int i = 0; i < n; i++){
        int cal, date;
        cin >> cal >> date;
        pq.emplace (date, cal);
    }

    priority_queue<int> foo;

    int k, w = 0;
    cin >> k;

    for (int i = k; i; i--){
        while (!pq.empty() && pq.top().F >= i){
            foo.push (pq.top().S);
            pq.pop();
        }
        if (!foo.empty()){
            w += foo.top();
            foo.pop();
        }
        else w--;
    }

    cout << w << '\n';
}
