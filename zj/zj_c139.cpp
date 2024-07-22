#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define pii pair<int, int>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;


int main(){
	weakson;

    vector<pii> v = {
        {1, 2},
        {1, 3},
        {1, 5},
        {2, 3},
        {2, 5},
        {3, 4},
        {3, 5},
        {4, 5}
    };

    set<string> ans;
    do{
        if (v[0].F != 1) continue;

        string A, B;
        bool vis[10][10] = {};

        int cur = v[0].F;
        A += cur + '0';
        for (auto i : v){
            if (cur == i.F){
                cur = i.S;
                A += cur + '0';
                vis[i.F][i.S] = true;
                vis[i.S][i.F] = true;
            }
            else if (cur == i.S){
                cur = i.F;
                A += cur + '0';
                vis[i.F][i.S] = true;
                vis[i.S][i.F] = true;
            }
            else break;
        }
        if (A.size() == 9) ans.insert (A);

        cur = v[0].S;
        B += cur + '0';
        for (auto i : v){
            if (cur == i.F){
                cur = i.S;
                B += cur + '0';
                vis[i.F][i.S] = true;
                vis[i.S][i.F] = true;
            }
            else if (cur == i.S){
                cur = i.F;
                B += cur + '0';
                vis[i.F][i.S] = true;
                vis[i.S][i.F] = true;
            }
            else break;
        }
        if (B.size() == 0) ans.insert (B);

    }while (next_permutation(v.begin(), v.end()));

    for (auto i : ans) cout << i << '\n';

    return 0;
}
