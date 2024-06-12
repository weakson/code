#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define pii pair<int, int>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

int n, m;
vector<int> b;
bitset<1005> in_a, in_station, in_railway;
stack<int> a, station, railway;

bool solution(){
    int ptr = 0;
    while (ptr < n){
        int car = b[ptr];
        if (in_a[car]){
            while (in_a[car]){
                in_a[a.top()] = false;
                in_station[a.top()] = true;
                station.push (a.top());
                a.pop();
            }
        }
        else if (in_railway[car]){
            while (in_railway[car]){
                in_railway[railway.top()] = false;
                in_station[railway.top()] = true;
                station.push (railway.top());
                railway.pop();
            }
        }
        else if (in_station[car]){
            while (station.top() != car){
                in_station[station.top()] = false;
                in_railway[station.top()] = true;
                railway.push (station.top());
                if (railway.size() > m) return false;
                station.pop();
            } 
        }
        in_station[station.top()] = false;
        station.pop();
        ptr++;
    }
    if (a.empty() && station.empty() && railway.empty()) return true;
    else return false;
}

int main(){
	weakson;

    cin >> n >> m;

    b.resize(n);
    for (int i = 0; i < n; i++) cin >> b[i];
    for (int i = n; i >= 1; i--) a.push (i);

    in_a.set();
    in_station.reset();
    in_railway.reset();

    bool ans = solution();

    if (ans) cout << "yes\n";
    else cout << "no\n";

    return 0;
}
