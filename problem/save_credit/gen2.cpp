
#include "testlib.h"
#include <iostream>
using namespace std;
 
int main(int argc, char* argv[]){
    ios::sync_with_stdio(0), cin.tie(0);
	registerGen (argc, argv, 1);
 
	int n = rnd.next (1, 1000);
    int m = rnd.next (1, 100000);
 
	cout << n << ' ' << m << '\n';

    const long long P = 3;
    long long pow_of_P[25];
    pow_of_P[0] = 1;
    for (int i = 1; i <= 18; i++){
        pow_of_P[i] = pow_of_P[i - 1] * P;
    }
 
	for (int i = 0; i < n; i++){
        int tmp = rnd.next (1, 18);
	    cout << pow_of_P[tmp];
	    if (i != n - 1) cout << ' ';
	}
	cout << '\n';

	for (int i = 0; i < n; i++){
        int tmp = rnd.next (1, 18);
	    cout << pow_of_P[tmp];
	    if (i != n - 1) cout << ' ';
	}
	cout << '\n';
	
	return 0;
}

