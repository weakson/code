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

void make_same_length (string &x, string &y){
    if (x.size() == y.size()) return;
    else if (x.size() < y.size()){
        string tmp = "0";
        x = tmp + x;
    }
    else{
        string tmp = "0";
        y = tmp + y;
    }
    return;
}

string plus_two_string (string x, string y){
    int len = x.size();
    vector<int> result (len + 1);
    for (int i = len - 1; i >= 0; i--){
        result[i + 1] = (x[i] - '0') + (y[i] - '0');
        result[i] += result[i + 1] / 10;
        result[i + 1] %= 10;
    }
}

string karatsuba (string x, string y){
    make_same_length (x, y);

    int n = s.size() / 2;
}

int main(){
	weakson;

    string a, b;
    cin >> a >> b;
}
