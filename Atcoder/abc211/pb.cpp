#include<iostream>
using namespace std;

int main(){
    int ans = 0;
    for (int i = 0; i < 4; i++){
        string tmp; cin >> tmp;
        if (tmp == "H") ans += 1;
        else if (tmp == "2B") ans += 10;
        else if (tmp == "3B") ans += 100;
        else ans += 1000;
    }

    if (ans == 1111) cout << "Yes\n";
    else cout << "No\n";

}
