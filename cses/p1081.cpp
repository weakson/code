#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

int cnt[1000005];

int main(){
	weakson;

    int n, MAX = -1;
    cin >> n;
    
    for (int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        MAX = max (MAX, temp);
        for (int j = 1; j * j <= temp; j++){
            if (temp % j == 0){
                cnt[j]++;
                if (j != temp / j) cnt[temp / j]++;
            }
        }
    }

    for (int i = MAX; i >= 1; i--){
        if (cnt[i] >= 2){
            cout << i << '\n';
            break;
        }
    }

    return 0;
}
