#include "testlib.h"

int main(int argc, char* argv[]){
	registerValidation (argc, argv);

	int n = inf.readInt (3, 100000, "n");
	inf.readEoln();

	for (int i = 0; i < n; i++){
		int a = inf.readInt (1, 1000000000, "a");
		if (i != n - 1) inf.readSpace();
	}
	inf.readEoln();

	inf.readEof();
}
