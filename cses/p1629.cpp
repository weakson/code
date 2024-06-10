#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;

bool cmp(pair<long long, long long> a, pair<long long, long long> b){
    return a.second < b.second;
}

int main(){
    ios::sync_with_stdio(0), cin.tie(0);
    int n;
    cin >> n;
    vector<pair<long long, long long> > v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i].first >> v[i].second;
    }
    sort (v.begin(), v.end(), cmp);
    int now_end = 0, ans = 0;
    for (int i = 0; i < n; i++){
        //cout << "v[" << i << "].first = " << v[i].first << '\n';
        //cout << "v[" << i << "].second = " << v[i].second << '\n';
        if (v[i].first >= now_end){
            ans++;
            now_end = v[i].second;
        }
    }
    cout << ans << '\n';
    return 0;
}
