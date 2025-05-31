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

// 123456789
// 123456799

struct Data{
    string Name, Age;
    int car;
};

// true --> a is smaller
// false --> b is smaller
bool str_num_cmp (string a, string b){
    if (a.size() == b.size()){
        for (int i = 0; i < a.size(); i++){
            if (a[i] != b[i]) return a[i] < b[i];
        }
    }
    return a.size() < b.size();
}

Data arr[20005];

bool cmp (Data a, Data b){
    if (a.car == b.car && a.Age == b.Age){
        return a.Name < b.Name;
    }
    else if (a.car == b.car){
        if (a.car == 5) return str_num_cmp (a.Age, b.Age);
        else return !(str_num_cmp(a.Age, b.Age));
    }
    return a.car < b.car;
}

int main(){
    weakson;
    
    int n, m;
    while (cin >> n >> m){

        for (int i = 0; i < n; i++){

            string tmp;
            cin >> arr[i].Name >> tmp >> arr[i].Age;

            if (tmp == "elder") arr[i].car = 1;
            else if (tmp == "nursy") arr[i].car = 2;
            else if (tmp == "kit") arr[i].car = 3;
            else if (tmp == "warrior") arr[i].car = 4;
            else if (tmp == "appentice") arr[i].car = 5;
            else if (tmp == "medicent") arr[i].car = 6;
            else if (tmp == "deputy") arr[i].car = 7;
            else arr[i].car = 8;
        }

        sort (arr, arr + n, cmp);

        /*
        cout << endl;
        for (int i = 0; i < n; i++){
            cout << arr[i].Name << ' ' << arr[i].car << ' ' << arr[i].Age << '\n';
        }
        cout << endl;
        */

        for (int i = 0; i < min(n, m); i++){
            cout << arr[i].Name << '\n';
        }
    }
}
