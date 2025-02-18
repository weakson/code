#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define pii pair<int, int>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

int main(){
	weakson;

    int arr[10][10];

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 6; j++){
            cin >> arr[i][j];
        }
    }

    bool is_found = false;
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 6; j++){
            if (j - 1 >= 0 && j + 1 <= 5){
                if (arr[i][j - 1] == arr[i][j] && arr[i][j + 1] == arr[i][j]){
                    is_found = true;
                    break;
                }
            }
            if (i - 1 >= 0 && i + 1 <= 4){
                if (arr[i - 1][j] == arr[i][j] && arr[i + 1][j] == arr[i][j]){
                    is_found = true;
                    break;
                }
            }
        }
    }

    if (is_found) cout << "Yes\n";
    else cout << "No\n";

    return 0;
}
