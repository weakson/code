#include<iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0), cin.tie(0);
    string s;
    cin >> s;
    int len = s.size();
    int x = 0;
    string ans;

    for (int i = 0; i < len / 2; i++){
        x += s[i] - 'A';
    }
    x %= 26;
    for (int i = 0; i < len / 2; i++){
        ans += (s[i] + x);
        if (ans[i] > 'Z') ans[i] -= 26;
    }
    
    x = 0;

    for (int i = len / 2; i < len; i++){
        x += s[i] - 'A';
    }
    x %= 26;
    for (int i = len / 2; i < len; i++){
        ans += (s[i] + x);
        if (ans[i] > 'Z') ans[i] -= 26;
    }
    //cout << ans << '\n';

    string merge;

    for (int i = 0, j = len / 2; i < len / 2; i++, j++){
        merge += ans[i] + (ans[j] - 'A');
        if (merge[i] > 'Z') merge[i] -= 26;
    }
    cout << merge << '\n';

    return 0;
}
