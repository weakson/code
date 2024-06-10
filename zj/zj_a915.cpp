#include<bits/stdc++.h>
using namespace std;

int main(){
    int pairs, x, y;
    vector<pair<int,int>> v;
    cin >> pairs;
    for(int i = 0; i < pairs; i++){
        cin >> x >> y;
        v.emplace_back(x, y);
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < pairs; i++)
        cout << v[i].first << ' ' << v[i].second << '\n';
    return 0;
}
