#include "testlib.h"
#include <iostream>
using namespace std;
 
int main(int argc, char* argv[]){
    ios::sync_with_stdio(0), cin.tie(0);
	registerGen (argc, argv, 1);

    const int MAXN = 1000;
    const int MAXA = 1000000000;
    const long long MAXX = 1'000'000'000'000;

    int n = rnd.next (1, MAXN);

    cout << n << '\n';

    long long Min = 2000000000;
 
	for (int i = 0; i < n; i++){
        long long a = rnd.next(1, MAXA);
        Min = min (Min, a);
	    cout << a;
	    if (i != n - 1) cout << ' ';
	}
	cout << '\n';

    long long x = rnd.next (Min, MAXX);

    cout << x << '\n';
	
	return 0;
}

