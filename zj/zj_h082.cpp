#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define pii pair<int, int>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

int arr[1005];
vector<pll> v;
queue<int> q;
int  n, m;

int main(){
	weakson;

    cin >> n >> m;
    v.resize (n);
    for (int i = 0; i < n; i++) cin >> v[i].F;
    for (int i = 0; i < n; i++) cin >> v[i].S;
    for (int i = 0; i < n; i++){
        int tmp; cin >> tmp;
        q.push (tmp);
    }

    queue<int> w, l;

    while (true){
        if (q.size() <= 1){
            if (w.empty() && l.empty()){
                break;
            }
            int tmp = 0;
            if (q.size() == 1){
                tmp = q.front();
                q.pop();
            }
            while (!w.empty()){
                q.push (w.front());
                w.pop();
            }
            while (!l.empty()){
                q.push (l.front());
                l.pop();
            }
            if (tmp) q.push (tmp);
        }

        else{
            int a = q.front();
            q.pop();
            int b = q.front();
            q.pop();
            
            ll val_a = v[a].F * v[a].S;
            ll val_b = v[b].F * v[b].S;

            if (val_a >= val_b){
                v[a].F = v[a].F + val_b / (2 * v[a].S);
                v[a].S = v[a].S + val_b / (2 * v[a].F);
                v[b].F = v[b].F + v[b].F / 2;
                v[b].S = v[b].S + v[b].S / 2;
                arr[b]++;
                if (arr[a] < m) w.push (a);
                if (arr[b] < m) l.push (b);
            }
            else{
                v[b].F = v[b].F + val_a / (2 * v[b].S);
                v[b].S = v[b].S + val_a / (2 * v[b].F);
                v[a].F = v[a].F + v[a].F / 2;
                v[a].S = v[a].S + v[a].S / 2;
                arr[a]++;
                if (arr[b] < m) w.push (b);
                if (arr[a] < m) l.push (a);
            }
        }
    }

    cout << q.front() << '\n';
}
