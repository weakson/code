#include "testlib.h"

int main(int argc, char* argv[]){ 
    registerValidation(argc, argv);

	int n = inf.readInt (1, 100000, "n");

	inf.readEoln();

	for (int i = 0; i < n; i++){
		inf.readInt (0, 100000, "a");
		if (i != n - 1) inf.readSpace();
	}
	inf.readEoln();

	for (int i = 0; i < n; i++){
		inf.readInt (0, 100000, "b");
		if (i != n - 1) inf.readSpace();
	}
	inf.readEoln();
	

	inf.readEof();
}
