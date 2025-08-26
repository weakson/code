#include "testlib.h"
#include <iostream>
using namespace std;
 
int main(int argc, char* argv[]){
    ios::sync_with_stdio(0), cin.tie(0);
	registerGen (argc, argv, 1);

    const int MAXN = 100000;
    const int MAXA = 1000000000;
    const long long MAXX = 1'000'000'000'000;

    int n = rnd.next (1, 1000);

    cout << n << '\n';
 
	for (int i = 0; i < n; i++){
	    cout << rnd.next (1, MAXA);
	    if (i != n - 1) cout << ' ';
	}
	cout << '\n';

    long long x = rnd.next (1LL, MAXX);

    cout << x << '\n';
	
	return 0;
}

