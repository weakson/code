#include<iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0), cin.tie(0);
    string s;
    while (cin >> s){
        if (s == "0") break;
        int len = s.size();
        int odd = 0, even = 0;
        for (int i = 0; i < len; i++){
            if (i % 2 == 0){
                even += (int)(s[i] - '0');
            }
            else{
                odd += (int)(s[i] - '0');
            }
        }
        if ((odd - even) % 11 == 0){
            cout << s << " is a multiple of 11.\n";
        }
        else{
            cout << s << " is not a multiple of 11.\n";
        }
    }
    return 0;
}
