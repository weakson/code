#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define pii pair<int, int>
#define dbg(x) cout << #x << " = " << x << endl;
#define psl pair<string, ll>
using namespace std;

bool cmp(psl a, psl b){
    return a.S > b.S;
}

int main(){
	weakson;
    
    int n;
    cin >> n;

    vector<pair<string, ll> > v(n);

    for (int i = 0; i < n; i++){
        cin >> v[i].F;
        cin >> v[i].S;
    }

    sort (v.begin(), v.end(), cmp);

    cout << v[0].F << '\n';
}
