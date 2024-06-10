#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

vector<string> v;

int main(){
	weakson;

    while (true){
        string temp;
        getline (cin, temp);
        if (temp == "***") break;
        v.emplace_back (temp);
    }

    sort (v.begin(), v.end());

    int j;
    pair <int, string> Max, Sec;
    Max.first = 0;
    Sec.first = -1;
    for (int i = 0; i < v.size(); i = j){
        for (j = i; j < v.size(); j++){
            if (v[j] != v[i]) break;
        }
        pair<int, string> tmp = make_pair (j - i, v[i]);
        if (tmp.first > Sec.first) Sec = tmp;
        if (Sec.first > Max.first) swap (Sec, Max);
    }

    if (Max.first == Sec.first) cout << "Runoff!\n";
    else cout << Max.second << '\n';

    return 0;
}
