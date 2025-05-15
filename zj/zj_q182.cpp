#include<iostream>
using namespace std;

int main(){

    string s;
    int k;

    cin >> s >> k;

    while (k--){
        int op; cin >> op;
        if (op == 0){
            for (int i = 0; i < s.size(); i += 2)
                swap (s[i], s[i + 1]);
        }
        else if (op == 1){
            for (int i = 0; i < s.size(); i += 2)
                if (s[i] > s[i + 1]) swap (s[i], s[i + 1]);
        }
        else{
            string tmp;
            for (int i = 0; i < s.size() / 2; i++){
                tmp += s[i];
                tmp += s[i + s.size() / 2];
            }
            s = tmp;
        }
    }

    cout << s << '\n';
}
