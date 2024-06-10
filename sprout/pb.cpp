#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0), cin.tie(0);
    map<char, vector<char> > m;
    string mb;
    cin >> mb;
    for (int i = 0; i < 26; i++){
        m[mb[i]].emplace_back(mb[i]);
        char tmp = mb[mb[i] - 'A'];
        while (tmp != mb[i]){
            m[mb[i]].emplace_back(tmp);
            tmp = mb[tmp - 'A'];
        }
    }
    int len, q;
    cin >> len >> q;
    string s;
    cin >> s;
    while (q--){
        int t, x;
        cin >> t >> x;
        if (t != 0) cout << m[s[x - 1]][t % m[s[x - 1]].size()] << '\n';
        else cout << m[s[x - 1]][0] << '\n';
    }
    return 0;
}
