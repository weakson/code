#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

map<string, int> m;

int main(){
	weakson;

    while(true){
        string temp;
        getline (cin, temp);
        if (temp == "***") break;
        if (m.find (temp) == m.end()) m[temp] = 0;
        else m[temp]++;
    }

    int Max = 0, Sec = -1;
    string Mname, Sname;
    for (auto it = m.begin(); it != m.end(); it++){
        if (it -> second > Sec){
            Sec = it -> second;
            Sname = it -> first;
        }
        if (Sec > Max){
            swap (Sec, Max);
            swap (Mname, Sname);
        }
    }

    if (Sec == Max) cout << "Runoff!\n";
    else cout << Mname << '\n';
}
