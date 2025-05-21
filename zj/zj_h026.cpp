#include<bits/stdc++.h>
using namespace std;

int Win[6]  = {5, 0, 0, 0, 0, 2};
int Lose[6] = {2, 0, 5, 0, 0, 0};

int main(){
    int x[15], n, y[15];
    cin >> x[0] >> n;

    for (int i = 0; i < n; i++){
        cin >> y[i];

        if (i == 0) continue;

        if (i >= 2 && y[i - 1] == y[i - 2]){
            x[i] = Win[y[i - 2]];
        }
        else{
            x[i] = y[i - 1];
        }
    }

    bool is_result = false;

    for (int i = 0; i < n; i++){
        cout << x[i] << ' ';
        if (x[i] != y[i]){
            if (x[i] == Win[y[i]]) cout << ": Won at round " << i + 1 << '\n';
            else if (x[i] == Lose[y[i]]) cout << ": Lost at round " << i + 1 << '\n';
            is_result = true;
            break;
        }
    }

    if (!is_result) cout << ": Drew at round " << n << '\n';
}
