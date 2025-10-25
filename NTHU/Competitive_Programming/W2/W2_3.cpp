#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define pii pair<int, int>
#define swap(a,b) a ^= b ^= a ^= b
#define dbg(x) cout << #x << " = " << x << endl;
#define lowbit(x) (x & -x)
using namespace std;

int N, M, sum, Max, len, k, i, j, tmp;
bool is_valid;

void sol(){
    int N; cin >> N;

    while (N--){
        int M; cin >> M;

        vector<int> v(M), ans;
        int sum = 0, Max = -1;

        for (auto &i : v){
            cin >> i;
            Max = max (Max, i);
            sum += i;
        }

        if (sum % 4 || Max * 4 > sum){
            cout << "no\n";
            continue;
        }

        int num = 0, tmp = 0, pos;
        for (int i = 1; i < (1 << M); i++){
            pos = __builtin_ctz (i);
            num ^= lowbit (i);
            if (num & lowbit(i)) tmp += v[pos];
            else tmp -= v[pos];
            if (tmp * 4 == sum){
                ans.emplace_back (num);
            }
        }

        bool is_valid = false;

        int len = ans.size();
        for (int i = 0; i < len; i++){
            for (int j = i + 1; j < len; j++){
                if ((ans[i] & ans[j]) == 0){
                    for (int k = j + 1; k < len; k++){
                        if (((ans[i] | ans[j]) & ans[k]) == 0){
                            is_valid = true;
                            break;
                        }
                    }
                    if (is_valid) break;
                }
            }
            if (is_valid) break;
        }

        if (is_valid) cout << "yes\n";
        else cout << "no\n";
    }
}

int main(){
    weakson;

    sol();
}
