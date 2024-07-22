#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define pii pair<int, int>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

int n, t;
vector<int> v, tmp;

int main(){
	weakson;

    cin >> n;

    v.resize (n);
    tmp.resize (n);
    int G, M = 0;
    for (int i = 0; i < n; i++){
        cin >> v[i];
        M = max (M, v[i]);
        if (i == 0) G = v[i];
        else G = gcd (G, v[i]);
    }

    cin >> t;

    if ((G % t != 0 && t % G != 0) || t > M){
        cout << "-1\n";
        return 0;
    }

    set<vector<int> > s;
    queue<pair<vector<int>, int> > q;
    s.insert (tmp);
    q.push ({tmp, 0});
    bool is_found = false;

    while (q.size()){
        tmp = q.front().F;
        int cnt = q.front().S + 1;
        q.pop();
        for (int i = 0; i < n; i++){
            int temp = tmp[i];
            tmp[i] = v[i];
            if (tmp[i] == t){
                cout << cnt << '\n';
                is_found = true;
                break;
            }
            if (s.insert (tmp).second){
                q.push ({tmp, cnt});
            }
            
            tmp[i] = 0;
            if (s.insert (tmp).second){
                q.push ({tmp, cnt});
            }

            tmp[i] = temp;

            for (int j = 0; j < n; j++){
                if (j == i) continue;
                int M = min (v[j] - tmp[j], tmp[i]);
                if (M == 0) continue;
                int temp_j = tmp[j];
                tmp[i] -= M;
                tmp[j] += M;
                if (tmp[i] == t || tmp[j] == t){
                    cout << cnt << '\n';
                    is_found = true;
                    break;
                }
                if (s.insert (tmp).second){
                    q.push ({tmp, cnt});
                }
                tmp[i] = temp;
                tmp[j] = temp_j;
            }

        }
        if (is_found) break;
    }
    if (!is_found) cout << "-1\n";
}
