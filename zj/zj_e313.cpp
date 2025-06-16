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

struct Node{
    string s;
    int diff;
};

int cnt_diff (string x){
    int alph[30] = {};
    for (int i = 0; i < x.size(); i++){
        alph[x[i] - 'A'] = 1;
    }
    int sum = 0;
    for (int i = 0; i < 26; i++) sum += alph[i];
    return sum;
}

bool cmp (Node a, Node b){
    if (a.diff == b.diff) return a.s < b.s;
    return a.diff < b.diff;
}

int main(){
    weakson;

    int n; cin >> n;
    
    Node arr[1005];
    for (int i = 0; i < n; i++){
        cin >> arr[i].s;
        arr[i].diff = cnt_diff (arr[i].s);
    }

    sort (arr, arr + n, cmp);

    cout << arr[0].s << '\n';
}
