#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define weakson ios::sync_with_stdio(0), cin.tie(0);
#define pll pair<ll, ll>
#define pii pair<int, int>
#define dbg(x) cout << #x << " = " << x << endl;
using namespace std;

void hanoi (int n, char start, char mid, char end){
    if (n == 1){
        cout << "Move ring 1 from " << start << " to " << end << '\n';
        return;
    }

    hanoi (n - 1, start, end, mid);
    cout << "Move ring " << n << " from " << start << " to " << end << '\n';
    hanoi (n - 1, mid, start, end);

    return;
}

int main(){
	// weakson;

    int n;
    while (cin >> n){
        hanoi (n, 'A', 'B', 'C');
        cout << '\n';
    }
}
