#include "testlib.h"
#include <iostream>
using namespace std;

int main(int argc, char* argv[]){
	 registerGen (argc, argv, 1);

	 const int N = 100000;
	 int n = rnd.next (1, N);
	 cout << n << '\n';

	 for (int i = 0; i < n; i++){
		 cout << rnd.next (0, 100000);
		 if (i != n - 1) cout << ' ';
	 }
	 cout << '\n';

	 for (int i = 0; i < n; i++){
		 cout << rnd.next (0, 100000);
		 if (i != n - 1) cout << ' ';
	 }
	 cout << '\n';

	 return 0;
}
