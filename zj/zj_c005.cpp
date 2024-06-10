#include<iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0), cin.tie(0);
    int n;
    cin >> n;
    while (n--){
        int f;
        cin >> f;
        long long sum = 0;
        while(f--){
            int a, b, c;
            cin >> a >> b >> c;
            sum += a * c;
        }
        cout << sum << '\n';
    }
    return 0;
}
