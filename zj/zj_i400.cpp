#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

int main(){
	weakson;

    int m, n;
    cin >> m >> n;

    string e[105], s;

    for (int i = 1; i <= m; i++) cin >> e[i];

    cin >> s;

    deque<char> t;
    for (int i = 0; i < n; i++) t.push_back (s[i]);

    for (int i = m; i >= 1; i--){
        deque<char> tmp;
        int cnt = 0;
        for (int j = n - 1; j >= 0; j--){
            if (e[i][j] == '1'){
                tmp.push_back (t.back());
                cnt++;
                t.pop_back();
            }
            else{
                tmp.push_front (t.back());
                t.pop_back();
            }
        }
        if (cnt & 1){
            queue<char> q;
            for (int j = 0; j < n / 2; j++){
                q.push (tmp.front());
                tmp.pop_front();
            }
            if (n & 1){
                tmp.push_back (tmp.front());
                tmp.pop_front();
            }
            while (!q.empty()){
                tmp.push_back (q.front());
                q.pop();
            }
        }
        t = tmp;
    }
    for (int i = 0; i < n; i++) cout << t[i];
    cout << '\n';
}
