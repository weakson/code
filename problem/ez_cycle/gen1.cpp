#include "testlib.h"
#include <iostream>
using namespace std;
 
int main(int argc, char* argv[]){
    ios::sync_with_stdio(0), cin.tie(0);
	registerGen (argc, argv, 1);
 
	const int N = 100000;
	int K = N;
	const int A = 10000000;
 
	cout << N << ' ' << K << '\n';
 
	int n = N;
 
	for (int i = 0; i < n; i++){
	    cout << A;
	    if (i != n - 1) cout << ' ';
	}
	cout << '\n';
	
	return 0;
}


