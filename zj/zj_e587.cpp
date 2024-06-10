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

    int x;
    string s;
    int l = 1, r = 10;
    bool is_honest = true;

    while (cin >> x){
        if (x == 0) break;
        
        getline (cin, s);
        getline (cin, s);

        if (s == "right on"){
            if (x >= l && x <= r && is_honest){
                cout << "Stan may be honest\n";
            }
            else{
                cout << "Stan is dishonest\n";
            }
            l = 1;
            r = 10;
            is_honest = true;
        }
        else if (s == "too high"){
            if (x <= l) is_honest = false;
            r = x - 1;
        }
        else if (s == "too low"){
            if (x >= r) is_honest = false;
            l = x + 1;
        }
    }

    return 0;
}
