#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define pii pair<int, int>
#define swap(a,b) a ^= b ^= a ^= b
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

int main(){
    weakson;

    int N;

    while (cin >> N && N != 0){

        int A[1005], B[1005];
        while (cin >> B[0] && B[0] != 0){

            for (int i = 1; i < N; i++) cin >> B[i];
            for (int i = 0; i < N; i++) A[i] = i + 1;

            stack<int> Station;
            bool is_valid = true;

            int pos_A = 0, pos_B;
            for (pos_B = 0; pos_B < N; pos_B++){
                while (Station.empty() || Station.top() != B[pos_B]){
                    if (pos_A >= N) break;
                    Station.push (A[pos_A++]);
                }

                if (Station.empty() || Station.top() != B[pos_B]){
                    is_valid = false;
                    break;
                }

                Station.pop();
            }

            if (is_valid) cout << "Yes\n";
            else cout << "No\n";
        }
        cout << '\n';
    }
}
