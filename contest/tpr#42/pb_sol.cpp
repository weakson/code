#include <iostream>
#include <iomanip>
#define int long long
using namespace std;
signed main() {
    
    int m,v,R;
    cin >> m >> v >> R;
    
    double ans = (double)m * ( v * v ) / (double)R;
    
    ans *= 100000000LL;
    ans = (int)ans;
    if( (int)ans % 10 > 6 ) ans += 10;
    ans /= 10;
    ans = (int)ans;
    ans = (double)ans / 10000000;
    cout << fixed << setprecision(7) << ans << "\n";
    
    return 0;
}
