#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(0), cin.tie(0);
    ll n, x;
    cin >> n >> x;
    vector <pair<ll, ll> > v;
    for (int i = 1; i <= n; i++){
        ll temp;
        cin >> temp;
        v.push_back(make_pair(temp, i));
    }
    sort (v.begin(), v.end());
    int l = 0, r = n - 1;
    while (true){
        ll sum = v[l].first + v[r].first;
        if (l == r){
            cout << "IMPOSSIBLE\n";
            break;
        }
        else if (sum == x){
            cout << v[l].second << ' ' << v[r].second << '\n';
            break;
        }

        else if (sum < x) l++;
        else if (sum > x) r--;
    }
    return 0;
}
