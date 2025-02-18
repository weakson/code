#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define dbg(x) cout << #x << " = " << x << endl;
#define EPS 1e-7
using namespace std;

int main(){
	weakson;

    int a, b, c;
    double sa, sb, n;

    cin >> a >> b >> c >> sa >> sb >> n;

    double sc = a * 1.25 + b * 2.0 + c * 1.0;
    sc = (sc * 20) / (15 * 4.25);

    sa *= 0.4;
    sb *= 0.4;
    double sum = sa + sb + sc;

    if (sum - n >= 0) cout << "YA\n";
    else cout << "QQ\n";

    return 0;
}
