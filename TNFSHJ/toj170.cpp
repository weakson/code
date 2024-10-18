#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define pii pair<int, int>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

void fA (int h){
    for (int i = 1; i <= h; i++){
        for (int j = 0; j < h - i; j++) cout << ' ';
        for (int j = 0; j < 2 * i - 1; j++) cout << '*';
        cout << '\n';
    }
}

void fB (int h){
    fA (h);
    fA (h);
}

void fC (int h){
    for (int t = 1; t <= h; t++){
        for (int i = 1; i <= t; i++){
            for (int j = 0; j < h - i; j++) cout << ' ';
            for (int j = 0; j < 2 * i - 1; j++) cout << '*';
            cout << '\n';
        }
    }
}

void fD (int h){
    fA (10 * h);
}

void fE (int h){
    for (int i = 1; i <= h; i++){
        for (int j = 0; j < h - i + 2; j++) cout << ' ';
        for (int j = 0; j < 2 * i - 1; j++) cout << '*';
        cout << '\n';
    }
    for (int i = 0; i < 2 * h + 3; i++) cout << '#';
    cout << '\n';
}

void fF (int h){
    fA (2 * h);
}

void fG (int h){
    fA (3 * h);
}

void fH (int h){
    fA (7 * h);
}

void fI (int h){
    fA (4 * h - 1);
}

int main(){
	weakson;

    int t;
    cin >> t;

    while (t--){
        char c;
        int h;
        cin >> c >> h;
        if (c == 'A') fA (h);
        else if (c == 'B') fB (h);
        else if (c == 'C') fC (h);
        else if (c == 'D') fD (h);
        else if (c == 'E') fE (h);
        else if (c == 'F') fF (h);
        else if (c == 'G') fG (h);
        else if (c == 'H') fH (h);
        else if (c == 'I') fI (h);
        cout << '\n';
    }
}
