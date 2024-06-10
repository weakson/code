#include<iostream>
using namespace std;

int main(){
    int m;
    cin >> m;
    int t;
    while(cin >> t){
        if (t == 0) break;
        if (t % m == 0){
            cout << t / m << '\n';
        }
        else{
            cout << m - (t % m) << '\n';
        }
    }
    return 0;
}
