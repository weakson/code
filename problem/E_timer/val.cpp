#include <iostream>
#include "testlib.h"
 
using namespace std;
 
int main(int argc, char* argv[]) {
    registerValidation(argc, argv);
	int n = inf.readInt(1, 1000000, "n");
	inf.readSpace();
	int q = inf.readInt(1, 50, "q");
	inf.readEoln();

	// inf.readInts(n, 1, 1000000000, "a");

	for (int i = 0; i < n; i++){
		inf.readInt(1, 1000000000, "a");
		if (i != n - 1) inf.readSpace();
	}
	inf.readEoln();
	
	// inf.readInts(q, 1, min (n, 200000), "k");

	for (int i = 0; i < q; i++){
		inf.readInt(1, min (n, 200000), "k");
		inf.readEoln();
	}

	inf.readEof();
}

