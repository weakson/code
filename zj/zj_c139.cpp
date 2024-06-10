#include<bits/stdc++.h>
using namespace std;

int arr[10][10];

void build(){
    arr[1][2] = 1;
    arr[1][5] = 1;
    arr[1][3] = 1;

    arr[2][1] = 1;
    arr[2][3] = 1;
    arr[2][5] = 1;

    arr[3][2] = 1;
    arr[3][5] = 1;
    arr[3][1] = 1;
    arr[3][4] = 1;

    arr[4][5] = 1;
    arr[4][3] = 1;

    arr[5][1] = 1;
    arr[5][2] = 1;
    arr[5][3] = 1;
    arr[5][4] = 1;
}

bool visits[10][10];
vector<int> ans(9);

void dfs(int now, int cnt){

    if (cnt == 9){
        for (int i : ans) cout << i;
        cout << '\n';
        return;
    }
    for (int i = 1; i <= 5; i++){
        //cout << "now = " << now << " i = " << i << '\n';
        //cout << "visits[now][i] = " << visits[now][i] << '\n';
        //cout << '\n';

        if (visits[now][i] or visits[i][now]) continue;
        if (arr[now][i] != 1 or arr[now][i] != 1) continue;

        ans[cnt] = i;

        visits[now][i] = true;
        visits[i][now] = true;

        dfs (i, cnt+1);

        visits[now][i] = false;
        visits[i][now] = false;
    }

    
    return;
}

int main(){
    ios::sync_with_stdio(false), cin.tie(0);
    build();
    ans[0] = 1;
    dfs (1, 1);
    return 0;
}
