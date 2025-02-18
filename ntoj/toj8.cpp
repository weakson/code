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
	// weakson;

    int n;

    while (cin >> n){
        string s;

        cin.ignore();
        getline (cin, s);

        for (int i = 0; i < n; i++){
            for (int j = i; j < s.size(); j += n){
                cout << s[j];
            }
        }
        cout << '\n';
    }

    return 0;
}
