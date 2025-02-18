#include<iostream>
using namespace std;

int a, b, c;

int to_decimal (int origin, int num){
    int sum = 0, pow = 0;
    int tmp = 1;
    while (num != 0){
        sum += num % 10 * tmp;
        num /= 10;
        tmp *= origin;
    }
    return sum;
}

int transform (int dis, int num){
    int sum = 0, cnt = 1;
    while (num != 0){
        sum += num % dis * cnt;
        num /= dis;
        cnt *= 10;
    }
    return sum;
}

void solve(){
    cin >> a >> b >> c;
    int ans = c;
    if (a != 10) ans = to_decimal (a, c);
    if (b != 10) ans = transform (b, ans);
    cout << ans << '\n';
    return;
}

int main(){
    ios::sync_with_stdio(0), cin.tie(0);
    solve();
    return 0;
}
