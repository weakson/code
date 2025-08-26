#include "testlib.h"

int main(int argc, char* argv[]){
	registerValidation (argc, argv);

    int a = inf.readInt (-100'000, 100'000, "a");
    inf.readSpace();
    int b = inf.readInt (-100'000, 100'000, "b");
    inf.readSpace();
    long long lf = inf.readLong (-10'000'000'000LL, 10'000'000'000LL, "lf");
    inf.readSpace();
    long long rt = inf.readLong (-10'000'000'000LL, 10'000'000'000LL, "rt");

	inf.readEoln();

	inf.readEof();
}
