#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    //ios::sync_with_stdio(0), cin.tie(0);
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        stack<int> train;
        for (int i = n; i >= 1; i--){
            train.push(i);
        }
        stack<int> station;
        int railway[100005];
        for (int i = 0; i < n; i++){
            cin >> railway[i];
        }
        bool b = true;
        int ptr = 0;
        while (true){
            if (ptr == n && station.empty()) break;
            if (train.empty() && station.top() != railway[ptr]){
                b = false;
                break;
            }
            if (!station.empty()){
                if (station.top() == railway[ptr]){
                    station.pop();
                    ptr++;
                }
                else{
                    station.push(train.top());
                    train.pop();
                }
            }
            else{
                station.push(train.top());
                train.pop();
            }
        }
        if (b) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}
