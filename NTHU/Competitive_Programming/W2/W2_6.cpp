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

vector<int> pos;
int row[9], col[9], blk[9];
bool is_valid;
string ans;

void dfs (int p){
    if (p == pos.size()){
        cout << ans << '\n';
        is_valid = true;
        return;
    }

    int idx = pos[p];

    int r = idx / 9;
    int c = idx % 9;
    int b = c / 3 + 3 * (r / 3);

    int valid_val = row[r] | col[c] | blk[b];
    valid_val = ~valid_val & ((1 << 10) - 1);
    valid_val ^= 1;

    while (valid_val){
        int val = __builtin_ctz (lowbit (valid_val));
        ans[idx] = val + '0';

        row[r] |= (1 << val);
        col[c] |= (1 << val);
        blk[b] |= (1 << val);

        dfs (p + 1);

        if (is_valid) return;

        row[r] ^= (1 << val);
        col[c] ^= (1 << val);
        blk[b] ^= (1 << val);

        ans[idx] = '.';

        valid_val -= lowbit (valid_val);
    }
}

int main(){
    weakson;

    string s;

    while (cin >> s && s != "end"){
        pos.clear();
        memset (row, 0, 9 * sizeof(int));
        memset (col, 0, 9 * sizeof(int));
        memset (blk, 0, 9 * sizeof(int));
        bool no_sol = false;
        for (int i = 0; i < s.size(); i++){
            if (s[i] == '.'){
                pos.emplace_back (i);
            }
            else{
                int r, c, b, val;
                r = i / 9;
                c = i % 9;
                b = c / 3 + 3 * (r / 3);
                val = s[i] - '0';

                int tmp = row[r] | col[c] | blk[b];
                if (tmp & (1 << val)){
                    no_sol = true;
                    cout << "No solution.\n";
                    break;
                }

                row[r] |= (1 << val);
                col[c] |= (1 << val);
                blk[b] |= (1 << val);
            }
        }
        if (no_sol) continue;

        ans = s;
        is_valid = false;
        dfs (0);

        if (!is_valid) cout << "No solution.\n";
    }
}
