#include "testlib.h"
#include <iostream>
using namespace std;

int main(int argc, char* argv[]){
	 registerGen (argc, argv, 1);

	 const int N = 1000000;
	 const int K = 1000000000;
	 const int A = 10000000;

	 cout << N << ' ' << K << '\n';

	 int n = N;

	 for (int i = 0; i < n; i++){
		 cout << rnd.next (1, A) << ' ';
	 }
	 cout << '\n';
	 
	 return 0;
}
