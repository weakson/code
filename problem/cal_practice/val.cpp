#include "testlib.h"
using namespace std;

int main(int argc, char* argv[]){
	registerValidation (argc, argv);

	int q = inf.readInt (1, 100, "q");
	inf.readEoln();

	for (int i = 0; i < q; i++){
		string a = inf.readWord ("LS|RS|Rp");
		if (a == "Rp"){
			inf.readSpace();
			int x = inf.readInt(0, 9, "x");
		}
		inf.readEoln();
	}
	inf.readEof();
}
