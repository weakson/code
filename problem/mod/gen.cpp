#include "testlib.h"
#include <iostream>
using namespace std;

int main(int argc, char* argv[]){
	 registerGen (argc, argv, 1);

	 const int N = 100000;
	 cout << rnd.next (1, N) << '\n';

	 return 0;
}
