#include "testlib.h"

int main(int argc, char* argv[]){ 
    registerValidation(argc, argv);

	int n = inf.readInt (1, 1000000, "n");
	inf.readSpace();
	int k = inf.readInt (1, 1000000000, "k");
	inf.readEoln();

	for (int i = 0; i < n; i++){
		inf.readInt(1, 10000000, "a");
		inf.readSpace();
	}
	inf.readEoln();

	inf.readEof();
}
