#include<bits/stdc++.h>
using namespace std;
#define weakson ios::sync_with_stdio(0), cin.tie(0);

bitset<2147483648> b;

int main(){
    weakson;
    b.set();
    for (int i = 2; i <= 2147483647; i++){
        for (int j = i * 2; j <= 2147483647; j *= 2){
            b[j] = 0;
        }
    }
    long long x;
    while(cin >> x){
        if (b[x]) cout << "非質數\n";
        else cout << "質數\n";
    }
    return 0;
}
