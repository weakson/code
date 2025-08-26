#include "testlib.h"
#include <iostream>
using namespace std;
 
int main(int argc, char* argv[]){
    ios::sync_with_stdio(0), cin.tie(0);
	registerGen (argc, argv, 1);
 
	int n = rnd.next (1, 25);
    int m = rnd.next (1, 100000);
 
	cout << n << ' ' << m << '\n';
 
	for (int i = 0; i < n; i++){
	    cout << rnd.next (1, 1000000000);
	    if (i != n - 1) cout << ' ';
	}
	cout << '\n';

	for (int i = 0; i < n; i++){
	    cout << rnd.next (1, 1000000000);
	    if (i != n - 1) cout << ' ';
	}
	cout << '\n';
	
	return 0;
}

